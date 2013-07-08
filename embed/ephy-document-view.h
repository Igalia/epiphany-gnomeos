/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; -*- */
/* vim: set sw=2 ts=2 sts=2 et: */
/*
 *  Copyright © 2013 Igalia S.L.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef _EPHY_DOCUMENT_VIEW_H
#define _EPHY_DOCUMENT_VIEW_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define EPHY_TYPE_DOCUMENT_VIEW            (ephy_document_view_get_type())
#define EPHY_DOCUMENT_VIEW(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), EPHY_TYPE_DOCUMENT_VIEW, EphyDocumentView))
#define EPHY_IS_DOCUMENT_VIEW(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EPHY_TYPE_DOCUMENT_VIEW))
#define EPHY_DOCUMENT_VIEW_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), EPHY_TYPE_DOCUMENT_VIEW, EphyDocumentViewClass))
#define EPHY_IS_DOCUMENT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), EPHY_TYPE_DOCUMENT_VIEW))
#define EPHY_DOCUMENT_VIEW_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), EPHY_TYPE_DOCUMENT_VIEW, EphyDocumentViewClass))

typedef struct _EphyDocumentView            EphyDocumentView;
typedef struct _EphyDocumentViewClass       EphyDocumentViewClass;
typedef struct _EphyDocumentViewPrivate     EphyDocumentViewPrivate;

struct _EphyDocumentView {
  GtkScrolledWindow parent;

  /*< private >*/
  EphyDocumentViewPrivate *priv;
};

struct _EphyDocumentViewClass {
  GtkScrolledWindowClass parent_class;

};

GType       ephy_document_view_get_type (void) G_GNUC_CONST;

GtkWidget *ephy_document_view_new       (void);
void       ephy_document_view_load_uri  (EphyDocumentView *view,
                                         const char       *uri);

G_END_DECLS

#endif /* _EPHY_DOCUMENT_VIEW_H */
