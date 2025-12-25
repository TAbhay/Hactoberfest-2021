from flask import Flask, jsonify, request
from flask_sqlalchemy import SQLAlchemy
from flask_marshmallow import Marshmallow
import os 
app=Flask(__name__)
directory=os.path.abspath(os.path.dirname(__file__))

app.config['SQLALCHEMY_DATABASE_URI']='sqlite:///'+os.path.join(directory,'db.sqlite')

app.config['SQLALCHEMY_TRACK_MODIFICATIONS']=False

db=SQLAlchemy(app)

marsh=Marshmallow(app)
class Package(db.Model):
	id=db.Column(db.Integer, primary_key=True)
	city=db.Column(db.String(100), nullable=False)
	days=db.Column(db.Integer, nullable=False)
	price=db.Column(db.Float, nullable=False)

	def __init__(self, city, days, price):
		self.city=city
		self.days=days
		self.price=price

class PackageSchema(marsh.Schema):
	class Meta:
		fields=('id','city','days','price')

Package_schema=PackageSchema()
Packages_schema=PackageSchema(many=True)


@app.route('/addPackage',methods=['POST'])
def addpack():
	city=request.json['city']
	days=request.json['days']
	price=request.json['price']

	AddnewPack=Package(city, days, price)
	db.session.add(AddnewPack)
	db.session.commit()

	return Package_schema.jsonify(AddnewPack)


@app.route('/viewAllPackages',methods=['GET'])
def viewall():
	AllPackages=Package.query.all()
	
	return Packages_schema.jsonify(AllPackages)


@app.route('/viewPackageById/<int:id>',methods=['GET'])
def viewparticular(id):

	OnePackage=Package.query.get(id)
	if(OnePackage==None):
		return('Id not found')
	else:
		#dumpimg=products_schema.dump()
		return Package_schema.jsonify(OnePackage)


@app.route('/viewPackageByCity/<string:city>',methods=['GET'])
def viewone(city):
	#OnePackageCity=Package.query.get(city1)
	OnePackage = Package.query.filter_by(city=city).first()
	if(OnePackage==None):
		return('Data with given city not found')
	
	return Package_schema.jsonify(OnePackage)


@app.route('/updatePackage/<int:id>',methods=['PUT'])
def updatepack(id):
	Package1= Package.query.get(id)
	if(package1==None):
		return('Given id not found')
	else:
		city=request.json['city']
		days=request.json['days']
		price=request.json['price']

		Package1.city=city
		Package1.days=days
		Package1.price=price

		db.session.commit()
		return Package_schema.jsonify(Package1)

@app.route('/deletePackage/<int:id>',methods=['DELETE'])
def deletepack(id):
	DelPackage= Package.query.get(id)
	if(DelPackage==None):
		return('Given Id not found')
	else:


		db.session.delete(DelPackage)
		db.session.commit()

		return Package_schema.jsonify(DelPackage)

if __name__ == '__main__':
    app.run(debug=True)