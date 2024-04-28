/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1598.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7990(t_small_parse_table_array *v)
{
	v->a[159800] = sym_string;
	v->a[159801] = actions(7350);
	v->a[159802] = 2;
	v->a[159803] = aux_sym__simple_variable_name_token1;
	v->a[159804] = aux_sym__multiline_variable_name_token1;
	v->a[159805] = actions(7348);
	v->a[159806] = 9;
	v->a[159807] = anon_sym_DASH;
	v->a[159808] = anon_sym_STAR;
	v->a[159809] = anon_sym_BANG;
	v->a[159810] = anon_sym_QMARK;
	v->a[159811] = anon_sym_DOLLAR;
	v->a[159812] = anon_sym_POUND;
	v->a[159813] = anon_sym_AT2;
	v->a[159814] = anon_sym_0;
	v->a[159815] = anon_sym__;
	v->a[159816] = actions(1239);
	v->a[159817] = 22;
	v->a[159818] = anon_sym_SEMI;
	v->a[159819] = anon_sym_PIPE_PIPE;
	small_parse_table_7991(v);
}

void	small_parse_table_7991(t_small_parse_table_array *v)
{
	v->a[159820] = anon_sym_AMP_AMP;
	v->a[159821] = anon_sym_PIPE;
	v->a[159822] = anon_sym_AMP;
	v->a[159823] = anon_sym_LT;
	v->a[159824] = anon_sym_GT;
	v->a[159825] = anon_sym_LT_LT;
	v->a[159826] = anon_sym_GT_GT;
	v->a[159827] = anon_sym_SEMI_SEMI;
	v->a[159828] = anon_sym_SEMI_AMP;
	v->a[159829] = anon_sym_SEMI_SEMI_AMP;
	v->a[159830] = anon_sym_PIPE_AMP;
	v->a[159831] = anon_sym_AMP_GT;
	v->a[159832] = anon_sym_AMP_GT_GT;
	v->a[159833] = anon_sym_LT_AMP;
	v->a[159834] = anon_sym_GT_AMP;
	v->a[159835] = anon_sym_GT_PIPE;
	v->a[159836] = anon_sym_LT_AMP_DASH;
	v->a[159837] = anon_sym_GT_AMP_DASH;
	v->a[159838] = anon_sym_LT_LT_DASH;
	v->a[159839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_7992(v);
}

void	small_parse_table_7992(t_small_parse_table_array *v)
{
	v->a[159840] = 8;
	v->a[159841] = actions(3);
	v->a[159842] = 1;
	v->a[159843] = sym_comment;
	v->a[159844] = actions(1235);
	v->a[159845] = 1;
	v->a[159846] = sym_file_descriptor;
	v->a[159847] = actions(3679);
	v->a[159848] = 1;
	v->a[159849] = anon_sym_DQUOTE;
	v->a[159850] = actions(7352);
	v->a[159851] = 1;
	v->a[159852] = sym_variable_name;
	v->a[159853] = state(4859);
	v->a[159854] = 1;
	v->a[159855] = sym_string;
	v->a[159856] = actions(7350);
	v->a[159857] = 2;
	v->a[159858] = aux_sym__simple_variable_name_token1;
	v->a[159859] = aux_sym__multiline_variable_name_token1;
	small_parse_table_7993(v);
}

void	small_parse_table_7993(t_small_parse_table_array *v)
{
	v->a[159860] = actions(7348);
	v->a[159861] = 9;
	v->a[159862] = anon_sym_DASH;
	v->a[159863] = anon_sym_STAR;
	v->a[159864] = anon_sym_BANG;
	v->a[159865] = anon_sym_QMARK;
	v->a[159866] = anon_sym_DOLLAR;
	v->a[159867] = anon_sym_POUND;
	v->a[159868] = anon_sym_AT2;
	v->a[159869] = anon_sym_0;
	v->a[159870] = anon_sym__;
	v->a[159871] = actions(1227);
	v->a[159872] = 22;
	v->a[159873] = anon_sym_SEMI;
	v->a[159874] = anon_sym_PIPE_PIPE;
	v->a[159875] = anon_sym_AMP_AMP;
	v->a[159876] = anon_sym_PIPE;
	v->a[159877] = anon_sym_AMP;
	v->a[159878] = anon_sym_LT;
	v->a[159879] = anon_sym_GT;
	small_parse_table_7994(v);
}

void	small_parse_table_7994(t_small_parse_table_array *v)
{
	v->a[159880] = anon_sym_LT_LT;
	v->a[159881] = anon_sym_GT_GT;
	v->a[159882] = anon_sym_SEMI_SEMI;
	v->a[159883] = anon_sym_SEMI_AMP;
	v->a[159884] = anon_sym_SEMI_SEMI_AMP;
	v->a[159885] = anon_sym_PIPE_AMP;
	v->a[159886] = anon_sym_AMP_GT;
	v->a[159887] = anon_sym_AMP_GT_GT;
	v->a[159888] = anon_sym_LT_AMP;
	v->a[159889] = anon_sym_GT_AMP;
	v->a[159890] = anon_sym_GT_PIPE;
	v->a[159891] = anon_sym_LT_AMP_DASH;
	v->a[159892] = anon_sym_GT_AMP_DASH;
	v->a[159893] = anon_sym_LT_LT_DASH;
	v->a[159894] = aux_sym_heredoc_redirect_token1;
	v->a[159895] = 19;
	v->a[159896] = actions(71);
	v->a[159897] = 1;
	v->a[159898] = sym_comment;
	v->a[159899] = actions(6883);
	small_parse_table_7995(v);
}

/* EOF small_parse_table_1598.c */
