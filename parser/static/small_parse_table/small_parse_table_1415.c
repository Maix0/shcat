/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1415.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7075(t_small_parse_table_array *v)
{
	v->a[141500] = sym_string;
	v->a[141501] = actions(6850);
	v->a[141502] = 2;
	v->a[141503] = aux_sym__simple_variable_name_token1;
	v->a[141504] = aux_sym__multiline_variable_name_token1;
	v->a[141505] = actions(6848);
	v->a[141506] = 9;
	v->a[141507] = anon_sym_DASH;
	v->a[141508] = anon_sym_STAR;
	v->a[141509] = anon_sym_BANG;
	v->a[141510] = anon_sym_QMARK;
	v->a[141511] = anon_sym_DOLLAR;
	v->a[141512] = anon_sym_POUND;
	v->a[141513] = anon_sym_AT2;
	v->a[141514] = anon_sym_0;
	v->a[141515] = anon_sym__;
	v->a[141516] = actions(1227);
	v->a[141517] = 24;
	v->a[141518] = anon_sym_SEMI;
	v->a[141519] = anon_sym_PIPE_PIPE;
	small_parse_table_7076(v);
}

void	small_parse_table_7076(t_small_parse_table_array *v)
{
	v->a[141520] = anon_sym_AMP_AMP;
	v->a[141521] = anon_sym_PIPE;
	v->a[141522] = anon_sym_AMP;
	v->a[141523] = anon_sym_LT;
	v->a[141524] = anon_sym_GT;
	v->a[141525] = anon_sym_LT_LT;
	v->a[141526] = anon_sym_GT_GT;
	v->a[141527] = anon_sym_esac;
	v->a[141528] = anon_sym_SEMI_SEMI;
	v->a[141529] = anon_sym_SEMI_AMP;
	v->a[141530] = anon_sym_SEMI_SEMI_AMP;
	v->a[141531] = anon_sym_PIPE_AMP;
	v->a[141532] = anon_sym_AMP_GT;
	v->a[141533] = anon_sym_AMP_GT_GT;
	v->a[141534] = anon_sym_LT_AMP;
	v->a[141535] = anon_sym_GT_AMP;
	v->a[141536] = anon_sym_GT_PIPE;
	v->a[141537] = anon_sym_LT_AMP_DASH;
	v->a[141538] = anon_sym_GT_AMP_DASH;
	v->a[141539] = anon_sym_LT_LT_DASH;
	small_parse_table_7077(v);
}

void	small_parse_table_7077(t_small_parse_table_array *v)
{
	v->a[141540] = aux_sym_heredoc_redirect_token1;
	v->a[141541] = anon_sym_LT_LT_LT;
	v->a[141542] = 3;
	v->a[141543] = actions(71);
	v->a[141544] = 1;
	v->a[141545] = sym_comment;
	v->a[141546] = actions(1251);
	v->a[141547] = 14;
	v->a[141548] = anon_sym_PIPE;
	v->a[141549] = anon_sym_LT;
	v->a[141550] = anon_sym_GT;
	v->a[141551] = anon_sym_LT_LT;
	v->a[141552] = anon_sym_AMP_GT;
	v->a[141553] = anon_sym_LT_AMP;
	v->a[141554] = anon_sym_GT_AMP;
	v->a[141555] = anon_sym_DOLLAR;
	v->a[141556] = aux_sym_number_token1;
	v->a[141557] = aux_sym_number_token2;
	v->a[141558] = anon_sym_DOLLAR_LPAREN;
	v->a[141559] = anon_sym_BQUOTE;
	small_parse_table_7078(v);
}

void	small_parse_table_7078(t_small_parse_table_array *v)
{
	v->a[141560] = aux_sym__simple_variable_name_token1;
	v->a[141561] = sym_word;
	v->a[141562] = actions(1253);
	v->a[141563] = 25;
	v->a[141564] = sym_file_descriptor;
	v->a[141565] = sym__concat;
	v->a[141566] = sym_test_operator;
	v->a[141567] = sym__brace_start;
	v->a[141568] = anon_sym_LPAREN_LPAREN;
	v->a[141569] = anon_sym_PIPE_PIPE;
	v->a[141570] = anon_sym_AMP_AMP;
	v->a[141571] = anon_sym_GT_GT;
	v->a[141572] = anon_sym_PIPE_AMP;
	v->a[141573] = anon_sym_AMP_GT_GT;
	v->a[141574] = anon_sym_GT_PIPE;
	v->a[141575] = anon_sym_LT_AMP_DASH;
	v->a[141576] = anon_sym_GT_AMP_DASH;
	v->a[141577] = anon_sym_LT_LT_DASH;
	v->a[141578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[141579] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_7079(v);
}

void	small_parse_table_7079(t_small_parse_table_array *v)
{
	v->a[141580] = aux_sym_concatenation_token1;
	v->a[141581] = sym__special_character;
	v->a[141582] = anon_sym_DQUOTE;
	v->a[141583] = sym_raw_string;
	v->a[141584] = sym_ansi_c_string;
	v->a[141585] = anon_sym_DOLLAR_LBRACE;
	v->a[141586] = anon_sym_DOLLAR_BQUOTE;
	v->a[141587] = anon_sym_LT_LPAREN;
	v->a[141588] = anon_sym_GT_LPAREN;
	v->a[141589] = 3;
	v->a[141590] = actions(71);
	v->a[141591] = 1;
	v->a[141592] = sym_comment;
	v->a[141593] = actions(1308);
	v->a[141594] = 14;
	v->a[141595] = anon_sym_EQ;
	v->a[141596] = anon_sym_PIPE;
	v->a[141597] = anon_sym_CARET;
	v->a[141598] = anon_sym_AMP;
	v->a[141599] = anon_sym_LT;
	small_parse_table_7080(v);
}

/* EOF small_parse_table_1415.c */
