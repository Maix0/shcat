/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_265.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1325(t_small_parse_table_array *v)
{
	v->a[26500] = 5;
	v->a[26501] = sym_arithmetic_expansion;
	v->a[26502] = sym_string;
	v->a[26503] = sym_simple_expansion;
	v->a[26504] = sym_expansion;
	v->a[26505] = sym_command_substitution;
	v->a[26506] = actions(719);
	v->a[26507] = 19;
	v->a[26508] = anon_sym_PIPE;
	v->a[26509] = anon_sym_SEMI_SEMI;
	v->a[26510] = anon_sym_AMP_AMP;
	v->a[26511] = anon_sym_PIPE_PIPE;
	v->a[26512] = anon_sym_LT;
	v->a[26513] = anon_sym_GT;
	v->a[26514] = anon_sym_GT_GT;
	v->a[26515] = anon_sym_AMP_GT;
	v->a[26516] = anon_sym_AMP_GT_GT;
	v->a[26517] = anon_sym_LT_AMP;
	v->a[26518] = anon_sym_GT_AMP;
	v->a[26519] = anon_sym_GT_PIPE;
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = anon_sym_LT_AMP_DASH;
	v->a[26521] = anon_sym_GT_AMP_DASH;
	v->a[26522] = anon_sym_LT_LT;
	v->a[26523] = anon_sym_LT_LT_DASH;
	v->a[26524] = aux_sym_heredoc_redirect_token1;
	v->a[26525] = anon_sym_AMP;
	v->a[26526] = anon_sym_SEMI;
	v->a[26527] = 10;
	v->a[26528] = actions(3);
	v->a[26529] = 1;
	v->a[26530] = sym_comment;
	v->a[26531] = actions(807);
	v->a[26532] = 1;
	v->a[26533] = anon_sym_PIPE;
	v->a[26534] = actions(811);
	v->a[26535] = 1;
	v->a[26536] = sym_file_descriptor;
	v->a[26537] = actions(967);
	v->a[26538] = 1;
	v->a[26539] = sym_variable_name;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = actions(861);
	v->a[26541] = 2;
	v->a[26542] = anon_sym_LT_LT;
	v->a[26543] = anon_sym_LT_LT_DASH;
	v->a[26544] = actions(965);
	v->a[26545] = 2;
	v->a[26546] = anon_sym_AMP_AMP;
	v->a[26547] = anon_sym_PIPE_PIPE;
	v->a[26548] = state(1415);
	v->a[26549] = 2;
	v->a[26550] = sym_variable_assignment;
	v->a[26551] = aux_sym_variable_assignments_repeat1;
	v->a[26552] = state(1322);
	v->a[26553] = 3;
	v->a[26554] = sym_file_redirect;
	v->a[26555] = sym_heredoc_redirect;
	v->a[26556] = aux_sym_redirected_statement_repeat1;
	v->a[26557] = actions(963);
	v->a[26558] = 4;
	v->a[26559] = anon_sym_SEMI_SEMI;
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = aux_sym_heredoc_redirect_token1;
	v->a[26561] = anon_sym_AMP;
	v->a[26562] = anon_sym_SEMI;
	v->a[26563] = actions(805);
	v->a[26564] = 19;
	v->a[26565] = anon_sym_LT;
	v->a[26566] = anon_sym_GT;
	v->a[26567] = anon_sym_GT_GT;
	v->a[26568] = anon_sym_AMP_GT;
	v->a[26569] = anon_sym_AMP_GT_GT;
	v->a[26570] = anon_sym_LT_AMP;
	v->a[26571] = anon_sym_GT_AMP;
	v->a[26572] = anon_sym_GT_PIPE;
	v->a[26573] = anon_sym_LT_AMP_DASH;
	v->a[26574] = anon_sym_GT_AMP_DASH;
	v->a[26575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26576] = anon_sym_DOLLAR;
	v->a[26577] = anon_sym_DQUOTE;
	v->a[26578] = sym_raw_string;
	v->a[26579] = sym_number;
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = anon_sym_DOLLAR_LBRACE;
	v->a[26581] = anon_sym_DOLLAR_LPAREN;
	v->a[26582] = anon_sym_BQUOTE;
	v->a[26583] = sym_word;
	v->a[26584] = 11;
	v->a[26585] = actions(3);
	v->a[26586] = 1;
	v->a[26587] = sym_comment;
	v->a[26588] = actions(807);
	v->a[26589] = 1;
	v->a[26590] = anon_sym_PIPE;
	v->a[26591] = actions(811);
	v->a[26592] = 1;
	v->a[26593] = sym_file_descriptor;
	v->a[26594] = actions(943);
	v->a[26595] = 1;
	v->a[26596] = anon_sym_SEMI_SEMI;
	v->a[26597] = actions(967);
	v->a[26598] = 1;
	v->a[26599] = sym_variable_name;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
