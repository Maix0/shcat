/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1895.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9475(t_small_parse_table_array *v)
{
	v->a[189500] = 2;
	v->a[189501] = anon_sym_LPAREN_LPAREN;
	v->a[189502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189503] = actions(8186);
	v->a[189504] = 2;
	v->a[189505] = sym_raw_string;
	v->a[189506] = sym_ansi_c_string;
	v->a[189507] = actions(8200);
	v->a[189508] = 2;
	v->a[189509] = anon_sym_LT_LPAREN;
	v->a[189510] = anon_sym_GT_LPAREN;
	v->a[189511] = state(1959);
	v->a[189512] = 2;
	v->a[189513] = sym_concatenation;
	v->a[189514] = sym_array;
	v->a[189515] = state(2279);
	v->a[189516] = 9;
	v->a[189517] = sym_arithmetic_expansion;
	v->a[189518] = sym_brace_expression;
	v->a[189519] = sym_string;
	small_parse_table_9476(v);
}

void	small_parse_table_9476(t_small_parse_table_array *v)
{
	v->a[189520] = sym_translated_string;
	v->a[189521] = sym_number;
	v->a[189522] = sym_simple_expansion;
	v->a[189523] = sym_expansion;
	v->a[189524] = sym_command_substitution;
	v->a[189525] = sym_process_substitution;
	v->a[189526] = 3;
	v->a[189527] = actions(71);
	v->a[189528] = 1;
	v->a[189529] = sym_comment;
	v->a[189530] = actions(1300);
	v->a[189531] = 11;
	v->a[189532] = anon_sym_LT;
	v->a[189533] = anon_sym_GT;
	v->a[189534] = anon_sym_AMP_GT;
	v->a[189535] = anon_sym_LT_AMP;
	v->a[189536] = anon_sym_GT_AMP;
	v->a[189537] = anon_sym_DOLLAR;
	v->a[189538] = aux_sym_number_token1;
	v->a[189539] = aux_sym_number_token2;
	small_parse_table_9477(v);
}

void	small_parse_table_9477(t_small_parse_table_array *v)
{
	v->a[189540] = anon_sym_DOLLAR_LPAREN;
	v->a[189541] = anon_sym_BQUOTE;
	v->a[189542] = sym_word;
	v->a[189543] = actions(1302);
	v->a[189544] = 23;
	v->a[189545] = sym_file_descriptor;
	v->a[189546] = sym__concat;
	v->a[189547] = sym_variable_name;
	v->a[189548] = sym_test_operator;
	v->a[189549] = sym__brace_start;
	v->a[189550] = anon_sym_LPAREN_LPAREN;
	v->a[189551] = anon_sym_GT_GT;
	v->a[189552] = anon_sym_AMP_GT_GT;
	v->a[189553] = anon_sym_GT_PIPE;
	v->a[189554] = anon_sym_LT_AMP_DASH;
	v->a[189555] = anon_sym_GT_AMP_DASH;
	v->a[189556] = anon_sym_LT_LT_LT;
	v->a[189557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189558] = anon_sym_DOLLAR_LBRACK;
	v->a[189559] = aux_sym_concatenation_token1;
	small_parse_table_9478(v);
}

void	small_parse_table_9478(t_small_parse_table_array *v)
{
	v->a[189560] = sym__special_character;
	v->a[189561] = anon_sym_DQUOTE;
	v->a[189562] = sym_raw_string;
	v->a[189563] = sym_ansi_c_string;
	v->a[189564] = anon_sym_DOLLAR_LBRACE;
	v->a[189565] = anon_sym_DOLLAR_BQUOTE;
	v->a[189566] = anon_sym_LT_LPAREN;
	v->a[189567] = anon_sym_GT_LPAREN;
	v->a[189568] = 23;
	v->a[189569] = actions(3);
	v->a[189570] = 1;
	v->a[189571] = sym_comment;
	v->a[189572] = actions(7956);
	v->a[189573] = 1;
	v->a[189574] = anon_sym_LPAREN;
	v->a[189575] = actions(7958);
	v->a[189576] = 1;
	v->a[189577] = anon_sym_DOLLAR_LBRACK;
	v->a[189578] = actions(7960);
	v->a[189579] = 1;
	small_parse_table_9479(v);
}

void	small_parse_table_9479(t_small_parse_table_array *v)
{
	v->a[189580] = anon_sym_DOLLAR;
	v->a[189581] = actions(7964);
	v->a[189582] = 1;
	v->a[189583] = anon_sym_DQUOTE;
	v->a[189584] = actions(7968);
	v->a[189585] = 1;
	v->a[189586] = aux_sym_number_token1;
	v->a[189587] = actions(7970);
	v->a[189588] = 1;
	v->a[189589] = aux_sym_number_token2;
	v->a[189590] = actions(7972);
	v->a[189591] = 1;
	v->a[189592] = anon_sym_DOLLAR_LBRACE;
	v->a[189593] = actions(7974);
	v->a[189594] = 1;
	v->a[189595] = anon_sym_DOLLAR_LPAREN;
	v->a[189596] = actions(7976);
	v->a[189597] = 1;
	v->a[189598] = anon_sym_BQUOTE;
	v->a[189599] = actions(7978);
	small_parse_table_9480(v);
}

/* EOF small_parse_table_1895.c */
