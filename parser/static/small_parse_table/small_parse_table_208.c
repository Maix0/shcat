/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_208.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1040(t_small_parse_table_array *v)
{
	v->a[20800] = actions(3);
	v->a[20801] = 1;
	v->a[20802] = sym_comment;
	v->a[20803] = actions(580);
	v->a[20804] = 1;
	v->a[20805] = anon_sym_PIPE;
	v->a[20806] = actions(771);
	v->a[20807] = 1;
	v->a[20808] = sym_variable_name;
	v->a[20809] = state(995);
	v->a[20810] = 2;
	v->a[20811] = sym_variable_assignment;
	v->a[20812] = aux_sym__variable_assignments_repeat1;
	v->a[20813] = state(1040);
	v->a[20814] = 3;
	v->a[20815] = sym_file_redirect;
	v->a[20816] = sym_heredoc_redirect;
	v->a[20817] = aux_sym_redirected_statement_repeat1;
	v->a[20818] = actions(816);
	v->a[20819] = 6;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = anon_sym_SEMI_SEMI;
	v->a[20821] = anon_sym_AMP_AMP;
	v->a[20822] = anon_sym_PIPE_PIPE;
	v->a[20823] = anon_sym_LT_LT;
	v->a[20824] = aux_sym_heredoc_redirect_token1;
	v->a[20825] = anon_sym_SEMI;
	v->a[20826] = actions(576);
	v->a[20827] = 12;
	v->a[20828] = anon_sym_LT;
	v->a[20829] = anon_sym_GT;
	v->a[20830] = anon_sym_GT_GT;
	v->a[20831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20832] = anon_sym_DOLLAR;
	v->a[20833] = anon_sym_DQUOTE;
	v->a[20834] = sym_raw_string;
	v->a[20835] = sym_number;
	v->a[20836] = anon_sym_DOLLAR_LBRACE;
	v->a[20837] = anon_sym_DOLLAR_LPAREN;
	v->a[20838] = anon_sym_BQUOTE;
	v->a[20839] = sym_word;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = 6;
	v->a[20841] = actions(3);
	v->a[20842] = 1;
	v->a[20843] = sym_comment;
	v->a[20844] = actions(771);
	v->a[20845] = 1;
	v->a[20846] = sym_variable_name;
	v->a[20847] = state(995);
	v->a[20848] = 2;
	v->a[20849] = sym_variable_assignment;
	v->a[20850] = aux_sym__variable_assignments_repeat1;
	v->a[20851] = state(1040);
	v->a[20852] = 3;
	v->a[20853] = sym_file_redirect;
	v->a[20854] = sym_heredoc_redirect;
	v->a[20855] = aux_sym_redirected_statement_repeat1;
	v->a[20856] = actions(576);
	v->a[20857] = 9;
	v->a[20858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20859] = anon_sym_DOLLAR;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = anon_sym_DQUOTE;
	v->a[20861] = sym_raw_string;
	v->a[20862] = sym_number;
	v->a[20863] = anon_sym_DOLLAR_LBRACE;
	v->a[20864] = anon_sym_DOLLAR_LPAREN;
	v->a[20865] = anon_sym_BQUOTE;
	v->a[20866] = sym_word;
	v->a[20867] = actions(580);
	v->a[20868] = 10;
	v->a[20869] = anon_sym_PIPE;
	v->a[20870] = anon_sym_SEMI_SEMI;
	v->a[20871] = anon_sym_AMP_AMP;
	v->a[20872] = anon_sym_PIPE_PIPE;
	v->a[20873] = anon_sym_LT;
	v->a[20874] = anon_sym_GT;
	v->a[20875] = anon_sym_GT_GT;
	v->a[20876] = anon_sym_LT_LT;
	v->a[20877] = aux_sym_heredoc_redirect_token1;
	v->a[20878] = anon_sym_SEMI;
	v->a[20879] = 5;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = actions(3);
	v->a[20881] = 1;
	v->a[20882] = sym_comment;
	v->a[20883] = actions(865);
	v->a[20884] = 1;
	v->a[20885] = sym_variable_name;
	v->a[20886] = actions(863);
	v->a[20887] = 2;
	v->a[20888] = aux_sym__simple_variable_name_token1;
	v->a[20889] = aux_sym__multiline_variable_name_token1;
	v->a[20890] = actions(861);
	v->a[20891] = 8;
	v->a[20892] = anon_sym_BANG;
	v->a[20893] = anon_sym_DASH;
	v->a[20894] = anon_sym_STAR;
	v->a[20895] = anon_sym_QMARK;
	v->a[20896] = anon_sym_DOLLAR;
	v->a[20897] = anon_sym_POUND;
	v->a[20898] = anon_sym_AT;
	v->a[20899] = anon_sym_0;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */
