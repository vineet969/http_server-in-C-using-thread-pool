#ifndef _HTTP_SERVER_HH_
#define _HTTP_SERVER_HH_

#define  MYQUEUE_H_

#include<iostream>
using namespace std;

struct HTTP_Request {
  string HTTP_version;

  string method;
  string url;

  // TODO : Add more fields if and when needed

  HTTP_Request(string request); // Constructor
};

struct HTTP_Response {
  string HTTP_version; // 1.0 for this assignment

  string status_code; // ex: 200, 404, etc.
  string status_text; // ex: OK, Not Found, etc.

  string content_type;
  string content_length;

  string body;

  // TODO : Add more fields if and when needed

  string get_string(); // Returns the string representation of the HTTP Response
};

HTTP_Response *handle_request(string request);



struct node{
    struct node * next;
    int *client_socket;
};

typedef struct node node_t;

void enqueue(int *client_socket);
int * dequeue();

#endif
