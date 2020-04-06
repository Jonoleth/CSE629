Action()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(4);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xDE\\x021\\xC1n`c\\x025\\xCB\\x9F\\xA3\r\\xBF\\xC1", 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0F\\xA2W\\xB8\\x18\\x0B\\x19\\xDD\\x18\\x1C!&\\xA6\\xFF\\xE3\\xA3", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0C\\x00\"\\xBE+\\xF63W\\x9B\\x01\\x8B\\xF7\\xB8\\x9B8\\xAF", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\\xD7C\\x1E\\xF7*\\x8D\\xFF\\x89\\x86\\xBF(\\xB8\\x7FCp", 
		LAST);

	web_custom_request("gts1o1", 
		"URL=http://ocsp.pki.goog/gts1o1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xFA\\x11\\xEE\\xD1Q\\xFE\\xDB0\\x08\\x00\\x00\\x00\\x00*\\xB2\\x9E", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv6", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Te", 
		"trailers");

	web_add_header("X-Http-Method-Override", 
		"POST");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARCmgwgaAhgLusxwrSICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABELqABxoCGAvvGhHoIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQioMHGgIYC2QOnrkiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARDm7QYaAhgLZWdUrSICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABEBkaAhgLxN0BZyICIAIoAQ==", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07u,\\xEB\\xE5\"/\\xCF\\\\} 8\\x98LQ\\x98", 
		LAST);

	lr_think_time(9);

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x029tF\\xBB\\xF4\\x1CHk\\x98c\\xA8T\\x0B\\x19\\xDD", 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=128090.314216282zfiiztfpfDHfDQfDVpiHDccf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=37", ENDITEM, 
		"Name=login.y", "Value=8", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_add_cookie("optimizelyBuckets=%7B%7D; DOMAIN=aus5.mozilla.org");

	web_add_header("Te", 
		"trailers");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/72.0.2/20200117190643/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%206.3.0.0.9600%20(x64)/ISET:SSE4_2,MEM:16272/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\r@\\xFE\\x10\"O\\xC5\\xC7\\xC6I\\x04\\xB24\\xC0\\x8F>", 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(9);

	web_submit_form("reservations.pl", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=02/10/2020", ENDITEM, 
		"Name=arrive", "Value=Portland", ENDITEM, 
		"Name=returnDate", "Value=02/11/2020", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=First", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t17.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=252;984;02/10/2020", ENDITEM, 
		"Name=reserveFlights.x", "Value=59", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t19.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv6", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	web_submit_form("itinerary.pl", 
		"Snapshot=t20.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=3", "Value=<OFF>", ENDITEM, 
		"Name=4", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_form("itinerary.pl_2", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=<OFF>", ENDITEM, 
		LAST);

	web_submit_form("itinerary.pl_3", 
		"Snapshot=t22.inf", 
		ITEMDATA, 
		"Name=1", "Value=<OFF>", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Ordinal=1", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(6);

	web_submit_form("reservations.pl_4", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=02/10/2020", ENDITEM, 
		"Name=arrive", "Value=San Francisco", ENDITEM, 
		"Name=returnDate", "Value=02/11/2020", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=First", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl_5", 
		"Snapshot=t25.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=160;808;02/10/2020", ENDITEM, 
		"Name=reserveFlights.x", "Value=50", ENDITEM, 
		"Name=reserveFlights.y", "Value=1", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl_6", 
		"Snapshot=t26.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_image("Home Button", 
		"Alt=Home Button", 
		"Ordinal=1", 
		"Snapshot=t27.inf", 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t28.inf", 
		LAST);

	return 0;
}