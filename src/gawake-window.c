/* gawake-window.c
 *
 * Copyright 2024 Kelvin Novais
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "gawake-window.h"

struct _GawakeWindow
{
	AdwApplicationWindow  parent_instance;

	/* Template widgets */
	GtkLabel            *label;
};

G_DEFINE_FINAL_TYPE (GawakeWindow, gawake_window, ADW_TYPE_APPLICATION_WINDOW)

static void
gawake_window_class_init (GawakeWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/io/github/kelvinnovais/Gawake/gawake-window.ui");
	gtk_widget_class_bind_template_child (widget_class, GawakeWindow, label);
}

static void
gawake_window_init (GawakeWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
