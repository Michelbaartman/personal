string s = "";

const int kMaxSizeOfMessage = 30;
const int INBOX = 5;

TFileIOResult nBTCmdRdErrorStatus;
int nSizeOfMessage;
ubyte nRcvBuffer[kMaxSizeOfMessage];

void bluetooth()
{
nSizeOfMessage = cCmdMessageGetSize(INBOX);

  if (nSizeOfMessage > kMaxSizeOfMessage)
    nSizeOfMessage = kMaxSizeOfMessage;
  if (nSizeOfMessage > 0){
  	nBTCmdRdErrorStatus = cCmdMessageRead(nRcvBuffer, nSizeOfMessage, INBOX);
	  nRcvBuffer[nSizeOfMessage] = '\0';
	 	stringFromChars(s, (char *) nRcvBuffer);
	while(true)
		{
		 if (nSizeOfMessage > kMaxSizeOfMessage)
		   nSizeOfMessage = kMaxSizeOfMessage;
		 if (nSizeOfMessage > 0){
		   nBTCmdRdErrorStatus = cCmdMessageRead(nRcvBuffer, nSizeOfMessage, INBOX);
			 nRcvBuffer[nSizeOfMessage] = '\0';
			 stringFromChars(s, (char *) nRcvBuffer);
		 if (s == "FIRE")
			{ moA = 0;
				moB = 0;
			}else if (s == "UP"){
			break;
			}
	 }
  }
 }
}
