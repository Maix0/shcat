/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1615.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8075(t_small_parse_table_array *v)
{
	v->a[161500] = anon_sym_AMP;
	v->a[161501] = anon_sym_LT;
	v->a[161502] = anon_sym_GT;
	v->a[161503] = actions(6789);
	v->a[161504] = 21;
	v->a[161505] = sym_test_operator;
	v->a[161506] = anon_sym_PLUS_EQ;
	v->a[161507] = anon_sym_DASH_EQ;
	v->a[161508] = anon_sym_STAR_EQ;
	v->a[161509] = anon_sym_SLASH_EQ;
	v->a[161510] = anon_sym_PERCENT_EQ;
	v->a[161511] = anon_sym_STAR_STAR_EQ;
	v->a[161512] = anon_sym_LT_LT_EQ;
	v->a[161513] = anon_sym_GT_GT_EQ;
	v->a[161514] = anon_sym_AMP_EQ;
	v->a[161515] = anon_sym_CARET_EQ;
	v->a[161516] = anon_sym_PIPE_EQ;
	v->a[161517] = anon_sym_PIPE_PIPE;
	v->a[161518] = anon_sym_AMP_AMP;
	v->a[161519] = anon_sym_EQ_EQ;
	small_parse_table_8076(v);
}

void	small_parse_table_8076(t_small_parse_table_array *v)
{
	v->a[161520] = anon_sym_BANG_EQ;
	v->a[161521] = anon_sym_LT_EQ;
	v->a[161522] = anon_sym_GT_EQ;
	v->a[161523] = anon_sym_RBRACK_RBRACK;
	v->a[161524] = anon_sym_EQ_TILDE;
	v->a[161525] = anon_sym_QMARK;
	v->a[161526] = 8;
	v->a[161527] = actions(3);
	v->a[161528] = 1;
	v->a[161529] = sym_comment;
	v->a[161530] = actions(1235);
	v->a[161531] = 1;
	v->a[161532] = sym_file_descriptor;
	v->a[161533] = actions(3791);
	v->a[161534] = 1;
	v->a[161535] = anon_sym_DQUOTE;
	v->a[161536] = actions(7444);
	v->a[161537] = 1;
	v->a[161538] = sym_variable_name;
	v->a[161539] = state(4389);
	small_parse_table_8077(v);
}

void	small_parse_table_8077(t_small_parse_table_array *v)
{
	v->a[161540] = 1;
	v->a[161541] = sym_string;
	v->a[161542] = actions(7442);
	v->a[161543] = 2;
	v->a[161544] = aux_sym__simple_variable_name_token1;
	v->a[161545] = aux_sym__multiline_variable_name_token1;
	v->a[161546] = actions(7440);
	v->a[161547] = 9;
	v->a[161548] = anon_sym_DASH;
	v->a[161549] = anon_sym_STAR;
	v->a[161550] = anon_sym_BANG;
	v->a[161551] = anon_sym_QMARK;
	v->a[161552] = anon_sym_DOLLAR;
	v->a[161553] = anon_sym_POUND;
	v->a[161554] = anon_sym_AT2;
	v->a[161555] = anon_sym_0;
	v->a[161556] = anon_sym__;
	v->a[161557] = actions(1227);
	v->a[161558] = 22;
	v->a[161559] = anon_sym_SEMI;
	small_parse_table_8078(v);
}

void	small_parse_table_8078(t_small_parse_table_array *v)
{
	v->a[161560] = anon_sym_PIPE_PIPE;
	v->a[161561] = anon_sym_AMP_AMP;
	v->a[161562] = anon_sym_PIPE;
	v->a[161563] = anon_sym_AMP;
	v->a[161564] = anon_sym_LT;
	v->a[161565] = anon_sym_GT;
	v->a[161566] = anon_sym_LT_LT;
	v->a[161567] = anon_sym_GT_GT;
	v->a[161568] = anon_sym_SEMI_SEMI;
	v->a[161569] = anon_sym_PIPE_AMP;
	v->a[161570] = anon_sym_AMP_GT;
	v->a[161571] = anon_sym_AMP_GT_GT;
	v->a[161572] = anon_sym_LT_AMP;
	v->a[161573] = anon_sym_GT_AMP;
	v->a[161574] = anon_sym_GT_PIPE;
	v->a[161575] = anon_sym_LT_AMP_DASH;
	v->a[161576] = anon_sym_GT_AMP_DASH;
	v->a[161577] = anon_sym_LT_LT_DASH;
	v->a[161578] = aux_sym_heredoc_redirect_token1;
	v->a[161579] = anon_sym_LT_LT_LT;
	small_parse_table_8079(v);
}

void	small_parse_table_8079(t_small_parse_table_array *v)
{
	v->a[161580] = anon_sym_BQUOTE;
	v->a[161581] = 3;
	v->a[161582] = actions(3);
	v->a[161583] = 1;
	v->a[161584] = sym_comment;
	v->a[161585] = actions(1342);
	v->a[161586] = 1;
	v->a[161587] = aux_sym_heredoc_redirect_token1;
	v->a[161588] = actions(1340);
	v->a[161589] = 36;
	v->a[161590] = anon_sym_SEMI;
	v->a[161591] = anon_sym_COMMA;
	v->a[161592] = anon_sym_PLUS_PLUS;
	v->a[161593] = anon_sym_DASH_DASH;
	v->a[161594] = anon_sym_PLUS_EQ;
	v->a[161595] = anon_sym_DASH_EQ;
	v->a[161596] = anon_sym_STAR_EQ;
	v->a[161597] = anon_sym_SLASH_EQ;
	v->a[161598] = anon_sym_PERCENT_EQ;
	v->a[161599] = anon_sym_STAR_STAR_EQ;
	small_parse_table_8080(v);
}

/* EOF small_parse_table_1615.c */
