#include "formats.h"

enum {
	TXT_MODULE_NAME,

	TXT_FILL_1,

	TXT_LINE_START,
	TXT_LINE_START_IRSSI,
	TXT_TIMESTAMP,
	TXT_SERVERTAG,
	TXT_DAYCHANGE,
	TXT_TALKING_WITH,
	TXT_REFNUM_TOO_LOW,
        TXT_ERROR_SERVER_STICKY,
        TXT_SET_SERVER_STICKY,
	TXT_UNSET_SERVER_STICKY,
        TXT_WINDOW_NAME_NOT_UNIQUE,
        TXT_WINDOW_LEVEL,
	TXT_WINDOWLIST_HEADER,
	TXT_WINDOWLIST_LINE,
	TXT_WINDOWLIST_FOOTER,
	TXT_WINDOWS_LAYOUT_SAVED,
	TXT_WINDOWS_LAYOUT_RESET,
        TXT_WINDOW_INFO_HEADER,
        TXT_WINDOW_INFO_FOOTER,
	TXT_WINDOW_INFO_REFNUM,
	TXT_WINDOW_INFO_REFNUM_STICKY,
	TXT_WINDOW_INFO_NAME,
	TXT_WINDOW_INFO_HISTORY,
	TXT_WINDOW_INFO_SIZE,
	TXT_WINDOW_INFO_LEVEL,
        TXT_WINDOW_INFO_SERVER,
	TXT_WINDOW_INFO_SERVER_STICKY,
        TXT_WINDOW_INFO_THEME,
	TXT_WINDOW_INFO_BOUND_ITEMS_HEADER,
	TXT_WINDOW_INFO_BOUND_ITEM,
	TXT_WINDOW_INFO_BOUND_ITEMS_FOOTER,
	TXT_WINDOW_INFO_ITEMS_HEADER,
	TXT_WINDOW_INFO_ITEM,
        TXT_WINDOW_INFO_ITEMS_FOOTER,

	TXT_FILL_2,

	TXT_LOOKING_UP,
	TXT_CONNECTING,
	TXT_CONNECTION_ESTABLISHED,
	TXT_CANT_CONNECT,
	TXT_CONNECTION_LOST,
	TXT_LAG_DISCONNECTED,
	TXT_DISCONNECTED,
	TXT_SERVER_QUIT,
	TXT_SERVER_CHANGED,
	TXT_UNKNOWN_SERVER_TAG,
	TXT_NO_CONNECTED_SERVERS,
	TXT_SERVER_LIST,
	TXT_SERVER_LOOKUP_LIST,
	TXT_SERVER_RECONNECT_LIST,
	TXT_RECONNECT_REMOVED,
	TXT_RECONNECT_NOT_FOUND,
	TXT_SETUPSERVER_ADDED,
	TXT_SETUPSERVER_REMOVED,
	TXT_SETUPSERVER_NOT_FOUND,
	TXT_YOUR_NICK,

	TXT_FILL_3,

	TXT_JOIN,
	TXT_PART,
	TXT_KICK,
	TXT_QUIT,
	TXT_QUIT_ONCE,
	TXT_INVITE,
	TXT_NOT_INVITED,
	TXT_NEW_TOPIC,
	TXT_TOPIC_UNSET,
	TXT_YOUR_NICK_CHANGED,
	TXT_NICK_CHANGED,
	TXT_TALKING_IN,
	TXT_NOT_IN_CHANNELS,
	TXT_CURRENT_CHANNEL,
	TXT_NAMES,
	TXT_NAMES_PREFIX,
	TXT_NAMES_NICK_OP,
	TXT_NAMES_NICK_HALFOP,
	TXT_NAMES_NICK_VOICE,
	TXT_NAMES_NICK,
	TXT_ENDOFNAMES,
	TXT_CHANLIST_HEADER,
	TXT_CHANLIST_LINE,
	TXT_CHANSETUP_NOT_FOUND,
	TXT_CHANSETUP_ADDED,
	TXT_CHANSETUP_REMOVED,
	TXT_CHANSETUP_HEADER,
	TXT_CHANSETUP_LINE,
	TXT_CHANSETUP_FOOTER,
        TXT_CHANNEL_MOVE_NOTIFY,

        TXT_FILL_4,

	TXT_OWN_MSG,
	TXT_OWN_MSG_CHANNEL,
	TXT_OWN_MSG_PRIVATE,
	TXT_OWN_MSG_PRIVATE_QUERY,
	TXT_PUBMSG_ME,
	TXT_PUBMSG_ME_CHANNEL,
	TXT_PUBMSG_HILIGHT,
	TXT_PUBMSG_HILIGHT_CHANNEL,
	TXT_PUBMSG,
	TXT_PUBMSG_CHANNEL,
	TXT_MSG_PRIVATE,
	TXT_MSG_PRIVATE_QUERY,
	TXT_NO_MSGS_GOT,
	TXT_NO_MSGS_SENT,

	TXT_FILL_5,

	TXT_QUERY_START,
	TXT_QUERY_STOP,
	TXT_NO_QUERY,
	TXT_QUERY_SERVER_CHANGED,
        TXT_QUERY_MOVE_NOTIFY,

	TXT_FILL_6,

	TXT_HILIGHT_HEADER,
	TXT_HILIGHT_LINE,
	TXT_HILIGHT_FOOTER,
	TXT_HILIGHT_NOT_FOUND,
	TXT_HILIGHT_REMOVED,

	TXT_FILL_7,

	TXT_ALIAS_ADDED,
	TXT_ALIAS_REMOVED,
	TXT_ALIAS_NOT_FOUND,
	TXT_ALIASLIST_HEADER,
	TXT_ALIASLIST_LINE,
	TXT_ALIASLIST_FOOTER,

	TXT_FILL_8,

	TXT_LOG_OPENED,
	TXT_LOG_CLOSED,
	TXT_LOG_CREATE_FAILED,
	TXT_LOG_LOCKED,
	TXT_LOG_NOT_OPEN,
	TXT_LOG_STARTED,
	TXT_LOG_STOPPED,
	TXT_LOG_LIST_HEADER,
	TXT_LOG_LIST,
	TXT_LOG_LIST_FOOTER,
	TXT_WINDOWLOG_FILE,
	TXT_WINDOWLOG_FILE_LOGGING,
	TXT_LOG_NO_AWAY_MSGS,
	TXT_LOG_AWAY_MSGS,

	TXT_FILL_9,

	TXT_MODULE_HEADER,
	TXT_MODULE_LINE,
        TXT_MODULE_FOOTER,
	TXT_MODULE_ALREADY_LOADED,
	TXT_MODULE_NOT_LOADED,
	TXT_MODULE_LOAD_ERROR,
	TXT_MODULE_INVALID,
	TXT_MODULE_LOADED,
	TXT_MODULE_UNLOADED,

	TXT_FILL_10,

	TXT_COMMAND_UNKNOWN,
	TXT_COMMAND_AMBIGUOUS,
	TXT_OPTION_UNKNOWN,
	TXT_OPTION_AMBIGUOUS,
	TXT_OPTION_MISSING_ARG,
	TXT_NOT_ENOUGH_PARAMS,
	TXT_NOT_CONNECTED,
	TXT_NOT_JOINED,
	TXT_CHAN_NOT_FOUND,
	TXT_CHAN_NOT_SYNCED,
        TXT_ILLEGAL_PROTO,
	TXT_NOT_GOOD_IDEA,

	TXT_FILL_11,

	TXT_THEME_SAVED,
	TXT_THEME_SAVE_FAILED,
	TXT_THEME_NOT_FOUND,
	TXT_THEME_CHANGED,
	TXT_WINDOW_THEME,
	TXT_WINDOW_THEME_DEFAULT,
	TXT_WINDOW_THEME_CHANGED,
	TXT_WINDOW_THEME_REMOVED,
	TXT_FORMAT_TITLE,
	TXT_FORMAT_SUBTITLE,
	TXT_FORMAT_ITEM,

	TXT_FILL_12,

	TXT_IGNORED,
	TXT_UNIGNORED,
	TXT_IGNORE_NOT_FOUND,
	TXT_IGNORE_NO_IGNORES,
	TXT_IGNORE_HEADER,
	TXT_IGNORE_LINE,
	TXT_IGNORE_FOOTER,

	TXT_FILL_13,

        TXT_UNKNOWN_CHAT_PROTOCOL,
        TXT_UNKNOWN_CHATNET,
	TXT_NOT_TOGGLE,
	TXT_PERL_ERROR,
	TXT_BIND_KEY,
	TXT_BIND_UNKNOWN_ID,
	TXT_CONFIG_SAVED,
	TXT_CONFIG_RELOADED,
	TXT_CONFIG_MODIFIED,
	TXT_GLIB_ERROR,
        TXT_OVERWRITE_CONFIG,
        TXT_SET_TITLE,
        TXT_SET_ITEM,
        TXT_SET_UNKNOWN,
	TXT_SET_NOT_BOOLEAN,
	TXT_TRANSLATION_NOT_FOUND,
        TXT_TRANSLATION_FILE_ERROR
};

extern FORMAT_REC fecommon_core_formats[];
