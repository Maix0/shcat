/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_163.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_815(t_small_parse_table_array *v)
{
	v->a[16300] = actions(2366);
	v->a[16301] = 1;
	v->a[16302] = anon_sym_DOLLAR_LBRACE;
	v->a[16303] = actions(2368);
	v->a[16304] = 1;
	v->a[16305] = anon_sym_DOLLAR_LPAREN;
	v->a[16306] = actions(2372);
	v->a[16307] = 1;
	v->a[16308] = anon_sym_DOLLAR_BQUOTE;
	v->a[16309] = actions(2376);
	v->a[16310] = 1;
	v->a[16311] = sym__brace_start;
	v->a[16312] = actions(2573);
	v->a[16313] = 1;
	v->a[16314] = sym__special_character;
	v->a[16315] = actions(2650);
	v->a[16316] = 1;
	v->a[16317] = sym_test_operator;
	v->a[16318] = state(1981);
	v->a[16319] = 1;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = aux_sym__literal_repeat1;
	v->a[16321] = state(2315);
	v->a[16322] = 1;
	v->a[16323] = sym_concatenation;
	v->a[16324] = actions(1530);
	v->a[16325] = 2;
	v->a[16326] = sym_file_descriptor;
	v->a[16327] = aux_sym_heredoc_redirect_token1;
	v->a[16328] = actions(2648);
	v->a[16329] = 2;
	v->a[16330] = sym_raw_string;
	v->a[16331] = sym_word;
	v->a[16332] = state(2136);
	v->a[16333] = 7;
	v->a[16334] = sym_arithmetic_expansion;
	v->a[16335] = sym_brace_expression;
	v->a[16336] = sym_string;
	v->a[16337] = sym_number;
	v->a[16338] = sym_simple_expansion;
	v->a[16339] = sym_expansion;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = sym_command_substitution;
	v->a[16341] = actions(1528);
	v->a[16342] = 20;
	v->a[16343] = anon_sym_PIPE;
	v->a[16344] = anon_sym_SEMI_SEMI;
	v->a[16345] = anon_sym_PIPE_AMP;
	v->a[16346] = anon_sym_AMP_AMP;
	v->a[16347] = anon_sym_PIPE_PIPE;
	v->a[16348] = anon_sym_LT;
	v->a[16349] = anon_sym_GT;
	v->a[16350] = anon_sym_GT_GT;
	v->a[16351] = anon_sym_AMP_GT;
	v->a[16352] = anon_sym_AMP_GT_GT;
	v->a[16353] = anon_sym_LT_AMP;
	v->a[16354] = anon_sym_GT_AMP;
	v->a[16355] = anon_sym_GT_PIPE;
	v->a[16356] = anon_sym_LT_AMP_DASH;
	v->a[16357] = anon_sym_GT_AMP_DASH;
	v->a[16358] = anon_sym_LT_LT;
	v->a[16359] = anon_sym_LT_LT_DASH;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = anon_sym_AMP;
	v->a[16361] = anon_sym_BQUOTE;
	v->a[16362] = anon_sym_SEMI;
	v->a[16363] = 3;
	v->a[16364] = actions(57);
	v->a[16365] = 1;
	v->a[16366] = sym_comment;
	v->a[16367] = actions(507);
	v->a[16368] = 17;
	v->a[16369] = sym_file_descriptor;
	v->a[16370] = sym_variable_name;
	v->a[16371] = sym_test_operator;
	v->a[16372] = sym__brace_start;
	v->a[16373] = anon_sym_LPAREN;
	v->a[16374] = anon_sym_LBRACE;
	v->a[16375] = anon_sym_GT_GT;
	v->a[16376] = anon_sym_AMP_GT_GT;
	v->a[16377] = anon_sym_GT_PIPE;
	v->a[16378] = anon_sym_LT_AMP_DASH;
	v->a[16379] = anon_sym_GT_AMP_DASH;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16381] = anon_sym_DQUOTE;
	v->a[16382] = sym_raw_string;
	v->a[16383] = anon_sym_DOLLAR_LBRACE;
	v->a[16384] = anon_sym_BQUOTE;
	v->a[16385] = anon_sym_DOLLAR_BQUOTE;
	v->a[16386] = actions(216);
	v->a[16387] = 27;
	v->a[16388] = anon_sym_for;
	v->a[16389] = anon_sym_select;
	v->a[16390] = anon_sym_while;
	v->a[16391] = anon_sym_until;
	v->a[16392] = anon_sym_done;
	v->a[16393] = anon_sym_if;
	v->a[16394] = anon_sym_case;
	v->a[16395] = anon_sym_function;
	v->a[16396] = anon_sym_BANG;
	v->a[16397] = anon_sym_declare;
	v->a[16398] = anon_sym_typeset;
	v->a[16399] = anon_sym_export;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
