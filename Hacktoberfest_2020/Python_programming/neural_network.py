# LANGUAGE: Python
# ENV: Python 3.9.0
# AUTHOR: Rushan
# GITHUB: https://github.com/RushanNotOfficial

import numpy as np
import tqdm

test_x = np.array([[0,0],
            [0,1],
            [1,0],
            [1,1],])
test_y = np.array([[1],
            [0],
            [0],
            [1]])

class FourLayerNetwork():
    def __init__(self):
        super().__init__()
        # hyperparameters
        self.learning_rate = 0.01
        nb_inp = 2
        nb_h1 = 150
        nb_h2 = 150
        nb_out = 1
        np.random.seed(1)
        # weights
        self.w1 = np.random.normal(scale=0.1,size=(nb_inp,nb_h1))
        self.w2 = np.random.normal(scale=0.1,size=(nb_h1,nb_h2))
        self.w3 = np.random.normal(scale=0.1,size=(nb_h2,nb_out))
        # biases
        self.b1 = np.zeros(nb_h1)
        self.b2 = np.zeros(nb_h2)
        self.b3 = np.zeros(nb_out)

    def sigmoid(self, x):
        return 1/(1+np.exp(-x))

    def sigmoid_prime(self, x):
        return x*(1-x)

    def train(self, x, y, iterations=10000):
        def train_once(self, x, y):
            # feed forward
            inp_l = x
            l1 = self.sigmoid(np.dot(inp_l,self.w1) + self.b1)
            l2 = self.sigmoid(np.dot(l1,self.w2) + self.b2)
            l3 = self.sigmoid(np.dot(l2,self.w3) + self.b3)
            #backpropagation
            delta_l3 = (y - l3)*self.sigmoid_prime(l3)          
            delta_l2 = delta_l3.dot(self.w3.T)*self.sigmoid_prime(l2) 
            delta_l1 = delta_l2.dot(self.w2.T)*self.sigmoid_prime(l1) 
            #update weights
            self.w3 += (np.dot(l2.T,delta_l3))
            self.w2 += (np.dot(l1.T,delta_l2))
            self.w1 += (np.dot(inp_l.T,delta_l1))
            #  update biases
            self.b3 = self.b3 + (np.sum(delta_l3,axis=0))
            self.b2 = self.b2 + (np.sum(delta_l2,axis=0))
            self.b1 = self.b1 + (np.sum(delta_l1,axis=0))
        for _ in tqdm.tqdm(range(iterations)):
            train_once(self, x, y)

    def predict(self, target) :
        l1 = self.sigmoid(np.dot(target, self.w1) + self.b1)
        l2 = self.sigmoid(np.dot(l1, self.w2) + self.b2)
        l3 = self.sigmoid(np.dot(l2, self.w3) + self.b3)
        print(l3.round(decimals=2))