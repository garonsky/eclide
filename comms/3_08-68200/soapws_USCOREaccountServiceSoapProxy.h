/* soapws_USCOREaccountServiceSoapProxy.h
   Generated by gSOAP 2.7.15 from Services.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapws_USCOREaccountServiceSoapProxy_H
#define soapws_USCOREaccountServiceSoapProxy_H
#include "soapH.h"

class SOAP_CMAC ws_USCOREaccountServiceSoapProxy : public soap
{ public:
	/// Endpoint URL of service 'ws_USCOREaccountServiceSoapProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	ws_USCOREaccountServiceSoapProxy();
	/// Constructor with copy of another engine state
	ws_USCOREaccountServiceSoapProxy(const struct soap&);
	/// Constructor with engine input+output mode control
	ws_USCOREaccountServiceSoapProxy(soap_mode iomode);
	/// Constructor with engine input and output mode control
	ws_USCOREaccountServiceSoapProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~ws_USCOREaccountServiceSoapProxy();
	/// Initializer used by constructors
	virtual	void ws_USCOREaccountServiceSoapProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Force close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'UpdateUser' (returns error code or SOAP_OK)
	virtual	int UpdateUser(_ns1__UpdateUserRequest *ns1__UpdateUserRequest, _ns1__UpdateUserResponse *ns1__UpdateUserResponse);

	/// Web service operation 'UpdateUserInput' (returns error code or SOAP_OK)
	virtual	int UpdateUserInput(_ns1__UpdateUserInputRequest *ns1__UpdateUserInputRequest, _ns1__UpdateUserInputResponse *ns1__UpdateUserInputResponse);

	/// Web service operation 'VerifyUser' (returns error code or SOAP_OK)
	virtual	int VerifyUser(_ns1__VerifyUserRequest *ns1__VerifyUserRequest, _ns1__VerifyUserResponse *ns1__VerifyUserResponse);

	/// Web service operation 'WhoAmI' (returns error code or SOAP_OK)
	virtual	int WhoAmI(_ns1__WhoAmIRequest *ns1__WhoAmIRequest, _ns1__WhoAmIResponse *ns1__WhoAmIResponse);
};
#endif