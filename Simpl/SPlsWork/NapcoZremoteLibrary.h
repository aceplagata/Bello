namespace NapcoZremoteLibrary;
        // class declarations
         class NapcoZremoteSystem;
         class NapcoZremoteSystemSSharpComponent;
         class NapcoZremoteClient;
     class NapcoZremoteSystem 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class NapcoZremoteSystemSSharpComponent 
    {
        // class delegates
        delegate FUNCTION DelegateNoParameters ( );
        delegate FUNCTION DelegateInteger ( SIGNED_LONG_INTEGER value );
        delegate FUNCTION DelegateIntegerInteger ( SIGNED_LONG_INTEGER value1 , SIGNED_LONG_INTEGER value2 );
        delegate FUNCTION DelegateString ( SIMPLSHARPSTRING value );

        // class events

        // class functions
        FUNCTION InitializeSettings ( STRING address );
        FUNCTION BeginInitialization ();
        FUNCTION AddZone ();
        FUNCTION ProcessKeypadPress ( SIGNED_LONG_INTEGER index );
        FUNCTION ClearKeypadText ();
        FUNCTION SetArmStay ();
        FUNCTION SetArmAway ();
        FUNCTION SetDisarm ();
        FUNCTION RequestStatus ();
        FUNCTION TriggerUpdateStatusLED ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateArmedLED ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateSounder ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateArmedStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateStayStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateAwayStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateFireAlarmStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateBurgAlarmStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateSystemTroubleStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateGuardTourStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateEntryDelayStatus ( SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateAreaArmedListByIndex ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateAreaArmedStayListByIndex ( SIGNED_LONG_INTEGER index , SIGNED_LONG_INTEGER temp );
        FUNCTION TriggerUpdateKeypadText ( STRING temp );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateNoParameters basicInitializationIsComplete;
        DelegateProperty DelegateInteger initializationIsComplete;
        DelegateProperty DelegateInteger updateStatusLED;
        DelegateProperty DelegateInteger updateArmedLED;
        DelegateProperty DelegateInteger updateSounder;
        DelegateProperty DelegateInteger updateArmedStatus;
        DelegateProperty DelegateInteger updateStayStatus;
        DelegateProperty DelegateInteger updateAwayStatus;
        DelegateProperty DelegateInteger updateFireAlarmStatus;
        DelegateProperty DelegateInteger updateBurgAlarmStatus;
        DelegateProperty DelegateInteger updateSystemTroubleStatus;
        DelegateProperty DelegateInteger updateGuardTourStatus;
        DelegateProperty DelegateInteger updateEntryDelayStatus;
        DelegateProperty DelegateIntegerInteger updateAreaArmedListByIndex;
        DelegateProperty DelegateIntegerInteger updateAreaArmedStayListByIndex;
        DelegateProperty DelegateString UpdateKeypadText;
        DelegateProperty DelegateString UpdateMessage;
    };

     class NapcoZremoteClient 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

