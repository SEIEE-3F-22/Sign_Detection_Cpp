
E: [global] [    878686] [Scheduler00Thr] dispatcherEventSend:61	Write failed -4

E: [xLink] [    878687] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878687] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -4) | event XLINK_WRITE_REQ

E: [xLink] [    878687] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878687] [test2] addEvent:264	Condition failed: event->header.flags.bitField.ack != 1
E: [global] [    878687] [test2] addEventWithPerf:276	 addEvent(event) method call failed with an error: 3
E: [global] [    878688] [test2] XLinkReadData:156	Condition failed: (addEventWithPerf(&event, &opTime))
E: [ncAPI] [    878688] [test2] getGraphMonitorResponseValue:1898	XLink error, rc: X_LINK_ERROR
        E: [ncAPI] [    878688] [test2] ncGraphQueueInference:3475	Can't get trigger response
E: [global] [    878703] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -1) | event XLINK_WRITE_REQ

E: [xLink] [    878703] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878704] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -1) | event XLINK_WRITE_REQ

E: [xLink] [    878704] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878724] [test2] addEvent:264	Condition failed: event->header.flags.bitField.ack != 1
E: [global] [    878725] [test2] addEventWithPerf:276	 addEvent(event) method call failed with an error: 3
E: [global] [    878725] [test2] XLinkReadData:156	Condition failed: (addEventWithPerf(&event, &opTime))
E: [ncAPI] [    878725] [test2] getGraphMonitorResponseValue:1898	XLink error, rc: X_LINK_ERROR
        E: [global] [    878725] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -1) | event XLINK_WRITE_REQ

E: [xLink] [    878725] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878892] [test2] addEvent:264	Condition failed: event->header.flags.bitField.ack != 1
E: [global] [    878892] [test2] addEventWithPerf:276	 addEvent(event) method call failed with an error: 3
E: [global] [    878892] [test2] XLinkReadData:156	Condition failed: (addEventWithPerf(&event, &opTime))
E: [ncAPI] [    878892] [test2] getGraphMonitorResponseValue:1898	XLink error, rc: X_LINK_ERROR
        E: [global] [    878893] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -4) | event XLINK_WRITE_REQ

E: [xLink] [    878893] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878916] [test2] addEvent:264	Condition failed: event->header.flags.bitField.ack != 1
E: [global] [    878916] [test2] addEventWithPerf:276	 addEvent(event) method call failed with an error: 3
E: [global] [    878916] [test2] XLinkReadData:156	Condition failed: (addEventWithPerf(&event, &opTime))
E: [ncAPI] [    878916] [test2] getGraphMonitorResponseValue:1898	XLink error, rc: X_LINK_ERROR
        E: [global] [    878994] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -4) | event XLINK_CLOSE_STREAM_REQ

E: [xLink] [    878994] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878995] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -4) | event XLINK_CLOSE_STREAM_REQ

E: [xLink] [    878996] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [global] [    878996] [Scheduler00Thr] dispatcherEventSend:53	Write failed (header) (err -4) | event XLINK_RESET_REQ

E: [xLink] [    878996] [Scheduler00Thr] sendEvents:998	Event sending failed
        E: [xLink] [    879008] [test2] DispatcherWaitEventComplete:355	Assertion Failed: curr != NULL

        E: [global] [    879008] [test2] XLinkResetRemote:254	Condition failed: DispatcherWaitEventComplete(&link->deviceHandle)
E: [ncAPI] [    889008] [test2] ncDeviceClose:1848	Device didn't appear after reboot
