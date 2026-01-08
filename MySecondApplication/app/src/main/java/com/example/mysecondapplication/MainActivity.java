package com.example.mysecondapplication;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;
import android.provider.CallLog;
import android.provider.ContactsContract;
import android.provider.MediaStore;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    EditText entry;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        entry=(EditText)findViewById(R.id.editTextTextPersonName);

    }
////////////////////////////........................CALL........................////////////////////////////////////
    public void call(View view) {
        Intent call=new Intent(Intent.ACTION_CALL);
        call.setData(Uri.parse("tel:2125551212"));
        if (ActivityCompat.checkSelfPermission(MainActivity.this,
                Manifest.permission.CALL_PHONE) != PackageManager.PERMISSION_GRANTED) {
            return;
        }
        startActivity(call);
    }
///////////////////////...................CAMERA..........................//////////////////////////////////////
    static final int REQUEST_IMAGE_CAPTURE = 1;
    public void camera(View view) {
        Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        if (intent.resolveActivity(getPackageManager()) != null) {
            startActivityForResult(intent, REQUEST_IMAGE_CAPTURE);
        }
    }
///////////////////////////...................CONTACT..........................//////////////////////////////////
    static final int REQUEST_SELECT_CONTACT = 1;
    public void contacts(View view) {
        Intent contacts = new Intent(Intent.ACTION_VIEW, ContactsContract.Contacts.CONTENT_URI);
        startActivity(contacts);
    }
//////////////////////////..................BROWSER.............................////////////////////////////////////
    public void browser(View view) {
        Intent intent = new Intent(Intent.ACTION_VIEW,Uri.parse(entry.getText().toString()));
        if (intent.resolveActivity(getPackageManager()) != null) {
            startActivity(intent);
        }
    }
//////////////////////////..................CALL LOG.............................////////////////////////////////////
public void callLog(View view) {
    Intent callLog = new Intent(Intent.ACTION_VIEW, CallLog.Calls.CONTENT_URI);
    startActivity(callLog);
}
//////////////////////////..................GALLERY.............................////////////////////////////////////
    public void gallery(View view) {
        Intent gallery = new Intent(Intent.ACTION_VIEW, MediaStore.Images.Media.INTERNAL_CONTENT_URI);
        startActivity(gallery);
    }
//////////////////////////..................DIAL PAD.............................////////////////////////////////////
    public void dialPad(View view) {
        Intent dialPad=new Intent(Intent.ACTION_DIAL);
        dialPad.setData(Uri.parse("tel:"+entry.getText()));
        startActivity(dialPad);
    }
}

