/*
 * Generated by gdbus-codegen 2.43.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GSD_SHELL_GLUE_H__
#define __GSD_SHELL_GLUE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Shell */

#define GSD_TYPE_SHELL (gsd_shell_get_type ())
#define GSD_SHELL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SHELL, GsdShell))
#define GSD_IS_SHELL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SHELL))
#define GSD_SHELL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GSD_TYPE_SHELL, GsdShellIface))

struct _GsdShell;
typedef struct _GsdShell GsdShell;
typedef struct _GsdShellIface GsdShellIface;

struct _GsdShellIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_focus_search) (
    GsdShell *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_show_osd) (
    GsdShell *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_params);

};

GType gsd_shell_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gsd_shell_interface_info (void);
guint gsd_shell_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gsd_shell_complete_focus_search (
    GsdShell *object,
    GDBusMethodInvocation *invocation);

void gsd_shell_complete_show_osd (
    GsdShell *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void gsd_shell_call_focus_search (
    GsdShell *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_shell_call_focus_search_finish (
    GsdShell *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_shell_call_focus_search_sync (
    GsdShell *proxy,
    GCancellable *cancellable,
    GError **error);

void gsd_shell_call_show_osd (
    GsdShell *proxy,
    GVariant *arg_params,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_shell_call_show_osd_finish (
    GsdShell *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_shell_call_show_osd_sync (
    GsdShell *proxy,
    GVariant *arg_params,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GSD_TYPE_SHELL_PROXY (gsd_shell_proxy_get_type ())
#define GSD_SHELL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SHELL_PROXY, GsdShellProxy))
#define GSD_SHELL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_SHELL_PROXY, GsdShellProxyClass))
#define GSD_SHELL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_SHELL_PROXY, GsdShellProxyClass))
#define GSD_IS_SHELL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SHELL_PROXY))
#define GSD_IS_SHELL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_SHELL_PROXY))

typedef struct _GsdShellProxy GsdShellProxy;
typedef struct _GsdShellProxyClass GsdShellProxyClass;
typedef struct _GsdShellProxyPrivate GsdShellProxyPrivate;

struct _GsdShellProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GsdShellProxyPrivate *priv;
};

struct _GsdShellProxyClass
{
  GDBusProxyClass parent_class;
};

GType gsd_shell_proxy_get_type (void) G_GNUC_CONST;

void gsd_shell_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdShell *gsd_shell_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GsdShell *gsd_shell_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gsd_shell_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdShell *gsd_shell_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GsdShell *gsd_shell_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GSD_TYPE_SHELL_SKELETON (gsd_shell_skeleton_get_type ())
#define GSD_SHELL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_SHELL_SKELETON, GsdShellSkeleton))
#define GSD_SHELL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_SHELL_SKELETON, GsdShellSkeletonClass))
#define GSD_SHELL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_SHELL_SKELETON, GsdShellSkeletonClass))
#define GSD_IS_SHELL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_SHELL_SKELETON))
#define GSD_IS_SHELL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_SHELL_SKELETON))

typedef struct _GsdShellSkeleton GsdShellSkeleton;
typedef struct _GsdShellSkeletonClass GsdShellSkeletonClass;
typedef struct _GsdShellSkeletonPrivate GsdShellSkeletonPrivate;

struct _GsdShellSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GsdShellSkeletonPrivate *priv;
};

struct _GsdShellSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gsd_shell_skeleton_get_type (void) G_GNUC_CONST;

GsdShell *gsd_shell_skeleton_new (void);


G_END_DECLS

#endif /* __GSD_SHELL_GLUE_H__ */
