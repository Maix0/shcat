/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_168.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_840(t_small_parse_table_array *v)
{
	v->a[16800] = actions(3473);
	v->a[16801] = 2;
	v->a[16802] = anon_sym_LPAREN_LPAREN;
	v->a[16803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16804] = actions(3493);
	v->a[16805] = 2;
	v->a[16806] = anon_sym_LT_LPAREN;
	v->a[16807] = anon_sym_GT_LPAREN;
	v->a[16808] = state(678);
	v->a[16809] = 2;
	v->a[16810] = sym_concatenation;
	v->a[16811] = aux_sym_for_statement_repeat1;
	v->a[16812] = actions(2096);
	v->a[16813] = 3;
	v->a[16814] = sym_file_descriptor;
	v->a[16815] = ts_builtin_sym_end;
	v->a[16816] = aux_sym_heredoc_redirect_token1;
	v->a[16817] = actions(3471);
	v->a[16818] = 3;
	v->a[16819] = sym_raw_string;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = sym_ansi_c_string;
	v->a[16821] = sym_word;
	v->a[16822] = state(1630);
	v->a[16823] = 9;
	v->a[16824] = sym_arithmetic_expansion;
	v->a[16825] = sym_brace_expression;
	v->a[16826] = sym_string;
	v->a[16827] = sym_translated_string;
	v->a[16828] = sym_number;
	v->a[16829] = sym_simple_expansion;
	v->a[16830] = sym_expansion;
	v->a[16831] = sym_command_substitution;
	v->a[16832] = sym_process_substitution;
	v->a[16833] = actions(2094);
	v->a[16834] = 20;
	v->a[16835] = anon_sym_SEMI;
	v->a[16836] = anon_sym_PIPE_PIPE;
	v->a[16837] = anon_sym_AMP_AMP;
	v->a[16838] = anon_sym_PIPE;
	v->a[16839] = anon_sym_AMP;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = anon_sym_LT;
	v->a[16841] = anon_sym_GT;
	v->a[16842] = anon_sym_LT_LT;
	v->a[16843] = anon_sym_GT_GT;
	v->a[16844] = anon_sym_SEMI_SEMI;
	v->a[16845] = anon_sym_PIPE_AMP;
	v->a[16846] = anon_sym_AMP_GT;
	v->a[16847] = anon_sym_AMP_GT_GT;
	v->a[16848] = anon_sym_LT_AMP;
	v->a[16849] = anon_sym_GT_AMP;
	v->a[16850] = anon_sym_GT_PIPE;
	v->a[16851] = anon_sym_LT_AMP_DASH;
	v->a[16852] = anon_sym_GT_AMP_DASH;
	v->a[16853] = anon_sym_LT_LT_DASH;
	v->a[16854] = anon_sym_LT_LT_LT;
	v->a[16855] = 21;
	v->a[16856] = actions(3);
	v->a[16857] = 1;
	v->a[16858] = sym_comment;
	v->a[16859] = actions(3365);
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = 1;
	v->a[16861] = anon_sym_DOLLAR_LBRACK;
	v->a[16862] = actions(3367);
	v->a[16863] = 1;
	v->a[16864] = anon_sym_DOLLAR;
	v->a[16865] = actions(3369);
	v->a[16866] = 1;
	v->a[16867] = sym__special_character;
	v->a[16868] = actions(3371);
	v->a[16869] = 1;
	v->a[16870] = anon_sym_DQUOTE;
	v->a[16871] = actions(3373);
	v->a[16872] = 1;
	v->a[16873] = aux_sym_number_token1;
	v->a[16874] = actions(3375);
	v->a[16875] = 1;
	v->a[16876] = aux_sym_number_token2;
	v->a[16877] = actions(3377);
	v->a[16878] = 1;
	v->a[16879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = actions(3379);
	v->a[16881] = 1;
	v->a[16882] = anon_sym_DOLLAR_LPAREN;
	v->a[16883] = actions(3381);
	v->a[16884] = 1;
	v->a[16885] = anon_sym_BQUOTE;
	v->a[16886] = actions(3383);
	v->a[16887] = 1;
	v->a[16888] = anon_sym_DOLLAR_BQUOTE;
	v->a[16889] = actions(3389);
	v->a[16890] = 1;
	v->a[16891] = sym__brace_start;
	v->a[16892] = actions(3528);
	v->a[16893] = 1;
	v->a[16894] = sym_test_operator;
	v->a[16895] = state(4554);
	v->a[16896] = 1;
	v->a[16897] = aux_sym__literal_repeat1;
	v->a[16898] = state(5004);
	v->a[16899] = 1;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
