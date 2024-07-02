/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_345.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1725(t_small_parse_table_array *v)
{
	v->a[34500] = sym_raw_string;
	v->a[34501] = sym_number;
	v->a[34502] = anon_sym_DOLLAR_LBRACE;
	v->a[34503] = anon_sym_DOLLAR_LPAREN;
	v->a[34504] = anon_sym_BQUOTE;
	v->a[34505] = sym_word;
	v->a[34506] = anon_sym_SEMI;
	v->a[34507] = 6;
	v->a[34508] = actions(3);
	v->a[34509] = 1;
	v->a[34510] = sym_comment;
	v->a[34511] = actions(361);
	v->a[34512] = 1;
	v->a[34513] = sym_file_descriptor;
	v->a[34514] = actions(1273);
	v->a[34515] = 1;
	v->a[34516] = sym_variable_name;
	v->a[34517] = actions(1271);
	v->a[34518] = 2;
	v->a[34519] = aux_sym__simple_variable_name_token1;
	small_parse_table_1726(v);
}

void	small_parse_table_1726(t_small_parse_table_array *v)
{
	v->a[34520] = aux_sym__multiline_variable_name_token1;
	v->a[34521] = actions(1269);
	v->a[34522] = 9;
	v->a[34523] = anon_sym_BANG;
	v->a[34524] = anon_sym_DASH;
	v->a[34525] = anon_sym_STAR;
	v->a[34526] = anon_sym_QMARK;
	v->a[34527] = anon_sym_DOLLAR;
	v->a[34528] = anon_sym_POUND;
	v->a[34529] = anon_sym_AT;
	v->a[34530] = anon_sym_0;
	v->a[34531] = anon_sym__;
	v->a[34532] = actions(363);
	v->a[34533] = 17;
	v->a[34534] = anon_sym_PIPE;
	v->a[34535] = anon_sym_RPAREN;
	v->a[34536] = anon_sym_SEMI_SEMI;
	v->a[34537] = anon_sym_AMP_AMP;
	v->a[34538] = anon_sym_PIPE_PIPE;
	v->a[34539] = anon_sym_LT;
	small_parse_table_1727(v);
}

void	small_parse_table_1727(t_small_parse_table_array *v)
{
	v->a[34540] = anon_sym_GT;
	v->a[34541] = anon_sym_GT_GT;
	v->a[34542] = anon_sym_LT_AMP;
	v->a[34543] = anon_sym_GT_AMP;
	v->a[34544] = anon_sym_GT_PIPE;
	v->a[34545] = anon_sym_LT_GT;
	v->a[34546] = anon_sym_LT_LT;
	v->a[34547] = anon_sym_LT_LT_DASH;
	v->a[34548] = aux_sym_heredoc_redirect_token1;
	v->a[34549] = anon_sym_AMP;
	v->a[34550] = anon_sym_SEMI;
	v->a[34551] = 3;
	v->a[34552] = actions(3);
	v->a[34553] = 1;
	v->a[34554] = sym_comment;
	v->a[34555] = actions(1178);
	v->a[34556] = 3;
	v->a[34557] = sym_file_descriptor;
	v->a[34558] = sym__concat;
	v->a[34559] = sym_variable_name;
	small_parse_table_1728(v);
}

void	small_parse_table_1728(t_small_parse_table_array *v)
{
	v->a[34560] = actions(1180);
	v->a[34561] = 27;
	v->a[34562] = anon_sym_esac;
	v->a[34563] = anon_sym_PIPE;
	v->a[34564] = anon_sym_SEMI_SEMI;
	v->a[34565] = anon_sym_AMP_AMP;
	v->a[34566] = anon_sym_PIPE_PIPE;
	v->a[34567] = anon_sym_LT;
	v->a[34568] = anon_sym_GT;
	v->a[34569] = anon_sym_GT_GT;
	v->a[34570] = anon_sym_LT_AMP;
	v->a[34571] = anon_sym_GT_AMP;
	v->a[34572] = anon_sym_GT_PIPE;
	v->a[34573] = anon_sym_LT_GT;
	v->a[34574] = anon_sym_LT_LT;
	v->a[34575] = anon_sym_LT_LT_DASH;
	v->a[34576] = aux_sym_heredoc_redirect_token1;
	v->a[34577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34578] = anon_sym_AMP;
	v->a[34579] = aux_sym_concatenation_token1;
	small_parse_table_1729(v);
}

void	small_parse_table_1729(t_small_parse_table_array *v)
{
	v->a[34580] = anon_sym_DOLLAR;
	v->a[34581] = anon_sym_DQUOTE;
	v->a[34582] = sym_raw_string;
	v->a[34583] = sym_number;
	v->a[34584] = anon_sym_DOLLAR_LBRACE;
	v->a[34585] = anon_sym_DOLLAR_LPAREN;
	v->a[34586] = anon_sym_BQUOTE;
	v->a[34587] = sym_word;
	v->a[34588] = anon_sym_SEMI;
	v->a[34589] = 12;
	v->a[34590] = actions(3);
	v->a[34591] = 1;
	v->a[34592] = sym_comment;
	v->a[34593] = actions(515);
	v->a[34594] = 1;
	v->a[34595] = sym_file_descriptor;
	v->a[34596] = actions(821);
	v->a[34597] = 1;
	v->a[34598] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34599] = actions(823);
	small_parse_table_1730(v);
}

/* EOF small_parse_table_345.c */
