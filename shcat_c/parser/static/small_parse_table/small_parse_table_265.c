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
	v->a[26500] = sym_file_descriptor;
	v->a[26501] = sym_variable_name;
	v->a[26502] = sym_test_operator;
	v->a[26503] = sym__brace_start;
	v->a[26504] = anon_sym_LPAREN_LPAREN;
	v->a[26505] = anon_sym_GT_GT;
	v->a[26506] = anon_sym_LBRACE;
	v->a[26507] = anon_sym_LBRACK_LBRACK;
	v->a[26508] = anon_sym_AMP_GT_GT;
	v->a[26509] = anon_sym_GT_PIPE;
	v->a[26510] = anon_sym_LT_AMP_DASH;
	v->a[26511] = anon_sym_GT_AMP_DASH;
	v->a[26512] = anon_sym_LT_LT_LT;
	v->a[26513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26514] = anon_sym_DOLLAR_LBRACK;
	v->a[26515] = anon_sym_DQUOTE;
	v->a[26516] = sym_raw_string;
	v->a[26517] = sym_ansi_c_string;
	v->a[26518] = anon_sym_DOLLAR_LBRACE;
	v->a[26519] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = anon_sym_LT_LPAREN;
	v->a[26521] = anon_sym_GT_LPAREN;
	v->a[26522] = actions(2715);
	v->a[26523] = 28;
	v->a[26524] = anon_sym_for;
	v->a[26525] = anon_sym_select;
	v->a[26526] = anon_sym_LT;
	v->a[26527] = anon_sym_GT;
	v->a[26528] = anon_sym_LPAREN;
	v->a[26529] = anon_sym_while;
	v->a[26530] = anon_sym_until;
	v->a[26531] = anon_sym_if;
	v->a[26532] = anon_sym_case;
	v->a[26533] = anon_sym_function;
	v->a[26534] = anon_sym_BANG;
	v->a[26535] = anon_sym_LBRACK;
	v->a[26536] = anon_sym_declare;
	v->a[26537] = anon_sym_typeset;
	v->a[26538] = anon_sym_export;
	v->a[26539] = anon_sym_readonly;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = anon_sym_local;
	v->a[26541] = anon_sym_unset;
	v->a[26542] = anon_sym_unsetenv;
	v->a[26543] = anon_sym_AMP_GT;
	v->a[26544] = anon_sym_LT_AMP;
	v->a[26545] = anon_sym_GT_AMP;
	v->a[26546] = anon_sym_DOLLAR;
	v->a[26547] = sym__special_character;
	v->a[26548] = aux_sym_number_token1;
	v->a[26549] = aux_sym_number_token2;
	v->a[26550] = anon_sym_DOLLAR_LPAREN;
	v->a[26551] = sym_word;
	v->a[26552] = 7;
	v->a[26553] = actions(3);
	v->a[26554] = 1;
	v->a[26555] = sym_comment;
	v->a[26556] = actions(4266);
	v->a[26557] = 1;
	v->a[26558] = aux_sym_concatenation_token1;
	v->a[26559] = actions(4283);
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = 1;
	v->a[26561] = anon_sym_LPAREN;
	v->a[26562] = actions(4286);
	v->a[26563] = 1;
	v->a[26564] = sym__concat;
	v->a[26565] = state(814);
	v->a[26566] = 1;
	v->a[26567] = aux_sym_concatenation_repeat1;
	v->a[26568] = actions(1281);
	v->a[26569] = 5;
	v->a[26570] = sym_file_descriptor;
	v->a[26571] = sym_test_operator;
	v->a[26572] = sym__bare_dollar;
	v->a[26573] = sym__brace_start;
	v->a[26574] = aux_sym_heredoc_redirect_token1;
	v->a[26575] = actions(1271);
	v->a[26576] = 42;
	v->a[26577] = anon_sym_LPAREN_LPAREN;
	v->a[26578] = anon_sym_SEMI;
	v->a[26579] = anon_sym_PIPE_PIPE;
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = anon_sym_AMP_AMP;
	v->a[26581] = anon_sym_PIPE;
	v->a[26582] = anon_sym_AMP;
	v->a[26583] = anon_sym_EQ_EQ;
	v->a[26584] = anon_sym_LT;
	v->a[26585] = anon_sym_GT;
	v->a[26586] = anon_sym_LT_LT;
	v->a[26587] = anon_sym_GT_GT;
	v->a[26588] = anon_sym_esac;
	v->a[26589] = anon_sym_SEMI_SEMI;
	v->a[26590] = anon_sym_SEMI_AMP;
	v->a[26591] = anon_sym_SEMI_SEMI_AMP;
	v->a[26592] = anon_sym_PIPE_AMP;
	v->a[26593] = anon_sym_EQ_TILDE;
	v->a[26594] = anon_sym_AMP_GT;
	v->a[26595] = anon_sym_AMP_GT_GT;
	v->a[26596] = anon_sym_LT_AMP;
	v->a[26597] = anon_sym_GT_AMP;
	v->a[26598] = anon_sym_GT_PIPE;
	v->a[26599] = anon_sym_LT_AMP_DASH;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
