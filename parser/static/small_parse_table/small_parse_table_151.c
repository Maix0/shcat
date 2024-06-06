/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_151.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_755(t_small_parse_table_array *v)
{
	v->a[15100] = 7;
	v->a[15101] = anon_sym_PIPE;
	v->a[15102] = anon_sym_LT;
	v->a[15103] = anon_sym_GT;
	v->a[15104] = anon_sym_AMP_GT;
	v->a[15105] = anon_sym_LT_AMP;
	v->a[15106] = anon_sym_GT_AMP;
	v->a[15107] = anon_sym_LT_LT;
	v->a[15108] = state(1350);
	v->a[15109] = 7;
	v->a[15110] = sym_arithmetic_expansion;
	v->a[15111] = sym_brace_expression;
	v->a[15112] = sym_string;
	v->a[15113] = sym_number;
	v->a[15114] = sym_simple_expansion;
	v->a[15115] = sym_expansion;
	v->a[15116] = sym_command_substitution;
	v->a[15117] = actions(766);
	v->a[15118] = 10;
	v->a[15119] = sym_file_descriptor;
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = anon_sym_PIPE_AMP;
	v->a[15121] = anon_sym_AMP_AMP;
	v->a[15122] = anon_sym_PIPE_PIPE;
	v->a[15123] = anon_sym_GT_GT;
	v->a[15124] = anon_sym_AMP_GT_GT;
	v->a[15125] = anon_sym_GT_PIPE;
	v->a[15126] = anon_sym_LT_AMP_DASH;
	v->a[15127] = anon_sym_GT_AMP_DASH;
	v->a[15128] = anon_sym_LT_LT_DASH;
	v->a[15129] = 3;
	v->a[15130] = actions(57);
	v->a[15131] = 1;
	v->a[15132] = sym_comment;
	v->a[15133] = actions(507);
	v->a[15134] = 18;
	v->a[15135] = sym_file_descriptor;
	v->a[15136] = sym_variable_name;
	v->a[15137] = sym_test_operator;
	v->a[15138] = sym__brace_start;
	v->a[15139] = anon_sym_LPAREN;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = anon_sym_LBRACE;
	v->a[15141] = anon_sym_RBRACE;
	v->a[15142] = anon_sym_GT_GT;
	v->a[15143] = anon_sym_AMP_GT_GT;
	v->a[15144] = anon_sym_GT_PIPE;
	v->a[15145] = anon_sym_LT_AMP_DASH;
	v->a[15146] = anon_sym_GT_AMP_DASH;
	v->a[15147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15148] = anon_sym_DQUOTE;
	v->a[15149] = sym_raw_string;
	v->a[15150] = anon_sym_DOLLAR_LBRACE;
	v->a[15151] = anon_sym_BQUOTE;
	v->a[15152] = anon_sym_DOLLAR_BQUOTE;
	v->a[15153] = actions(216);
	v->a[15154] = 26;
	v->a[15155] = anon_sym_for;
	v->a[15156] = anon_sym_select;
	v->a[15157] = anon_sym_while;
	v->a[15158] = anon_sym_until;
	v->a[15159] = anon_sym_if;
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = anon_sym_case;
	v->a[15161] = anon_sym_function;
	v->a[15162] = anon_sym_BANG;
	v->a[15163] = anon_sym_declare;
	v->a[15164] = anon_sym_typeset;
	v->a[15165] = anon_sym_export;
	v->a[15166] = anon_sym_readonly;
	v->a[15167] = anon_sym_local;
	v->a[15168] = anon_sym_unset;
	v->a[15169] = anon_sym_unsetenv;
	v->a[15170] = anon_sym_LT;
	v->a[15171] = anon_sym_GT;
	v->a[15172] = anon_sym_AMP_GT;
	v->a[15173] = anon_sym_LT_AMP;
	v->a[15174] = anon_sym_GT_AMP;
	v->a[15175] = anon_sym_DOLLAR;
	v->a[15176] = sym__special_character;
	v->a[15177] = aux_sym_number_token1;
	v->a[15178] = aux_sym_number_token2;
	v->a[15179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = sym_word;
	v->a[15181] = 4;
	v->a[15182] = actions(57);
	v->a[15183] = 1;
	v->a[15184] = sym_comment;
	v->a[15185] = actions(1997);
	v->a[15186] = 1;
	v->a[15187] = ts_builtin_sym_end;
	v->a[15188] = actions(1691);
	v->a[15189] = 17;
	v->a[15190] = sym_file_descriptor;
	v->a[15191] = sym_variable_name;
	v->a[15192] = sym_test_operator;
	v->a[15193] = sym__brace_start;
	v->a[15194] = anon_sym_LPAREN;
	v->a[15195] = anon_sym_LBRACE;
	v->a[15196] = anon_sym_GT_GT;
	v->a[15197] = anon_sym_AMP_GT_GT;
	v->a[15198] = anon_sym_GT_PIPE;
	v->a[15199] = anon_sym_LT_AMP_DASH;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
