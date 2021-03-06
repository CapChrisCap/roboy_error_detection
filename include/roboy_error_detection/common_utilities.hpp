enum NotificationCode {
    UNDEFINED_NOTIFICATION = 0,
    MOTOR_DEAD_NOTIFICATION,
    MOTOR_ALIVE_NOTIFICATION,
    JOINT_INVALID_REL_ANGLE_NOTIFICATION,
    MOTOR_IS_RUNNING_BUT_TENDON_NOT_NOTIFICATION,
    JOINT_TOO_FAR_NOTIFICATION,
    JOINT_TOO_CLOSE_NOTIFICATION
};

std::map<NotificationCode, string> notificationMessages = {
        {UNDEFINED_NOTIFICATION, "undefined"},
        {MOTOR_DEAD_NOTIFICATION, "Motor does not respond"},
        {MOTOR_ALIVE_NOTIFICATION, "Motor works fine"},
        {JOINT_INVALID_REL_ANGLE_NOTIFICATION, "Joint has an invalid angle"},
        {MOTOR_IS_RUNNING_BUT_TENDON_NOT_NOTIFICATION, "Motor is running but the corresponding tendon is not moving"},
        {JOINT_TOO_FAR_NOTIFICATION, "Joint magnet too far away"},
        {JOINT_TOO_CLOSE_NOTIFICATION, "Joint magnet too close"}
};

std::map<NotificationCode, string> notificationExtraMessages = {
        {UNDEFINED_NOTIFICATION, "undefined"},
        {MOTOR_DEAD_NOTIFICATION, "Please check first all cables of the motor to fix the problem"},
        {MOTOR_ALIVE_NOTIFICATION, "Nothing to do"},
        {JOINT_INVALID_REL_ANGLE_NOTIFICATION, "Please check the joint for defects"},
        {MOTOR_IS_RUNNING_BUT_TENDON_NOT_NOTIFICATION, "Please check the motor or the tendon for defects"},
        {JOINT_TOO_FAR_NOTIFICATION, "Please check the joint for defects"},
        {JOINT_TOO_CLOSE_NOTIFICATION, "Please check the joint for defects"}
};