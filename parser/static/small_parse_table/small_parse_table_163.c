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
	v->a[16300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16301] = actions(433);
	v->a[16302] = 1;
	v->a[16303] = anon_sym_DOLLAR;
	v->a[16304] = actions(436);
	v->a[16305] = 1;
	v->a[16306] = anon_sym_DQUOTE;
	v->a[16307] = actions(439);
	v->a[16308] = 1;
	v->a[16309] = anon_sym_DOLLAR_LBRACE;
	v->a[16310] = actions(442);
	v->a[16311] = 1;
	v->a[16312] = anon_sym_DOLLAR_LPAREN;
	v->a[16313] = actions(445);
	v->a[16314] = 1;
	v->a[16315] = anon_sym_BQUOTE;
	v->a[16316] = actions(448);
	v->a[16317] = 1;
	v->a[16318] = sym_variable_name;
	v->a[16319] = state(160);
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = 2;
	v->a[16321] = sym_concatenation;
	v->a[16322] = aux_sym_for_statement_repeat1;
	v->a[16323] = actions(425);
	v->a[16324] = 3;
	v->a[16325] = sym_raw_string;
	v->a[16326] = sym_number;
	v->a[16327] = sym_word;
	v->a[16328] = state(282);
	v->a[16329] = 5;
	v->a[16330] = sym_arithmetic_expansion;
	v->a[16331] = sym_string;
	v->a[16332] = sym_simple_expansion;
	v->a[16333] = sym_expansion;
	v->a[16334] = sym_command_substitution;
	v->a[16335] = actions(428);
	v->a[16336] = 11;
	v->a[16337] = anon_sym_esac;
	v->a[16338] = anon_sym_PIPE;
	v->a[16339] = anon_sym_SEMI_SEMI;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = anon_sym_AMP_AMP;
	v->a[16341] = anon_sym_PIPE_PIPE;
	v->a[16342] = anon_sym_LT;
	v->a[16343] = anon_sym_GT;
	v->a[16344] = anon_sym_GT_GT;
	v->a[16345] = anon_sym_LT_LT;
	v->a[16346] = aux_sym_heredoc_redirect_token1;
	v->a[16347] = anon_sym_SEMI;
	v->a[16348] = 13;
	v->a[16349] = actions(3);
	v->a[16350] = 1;
	v->a[16351] = sym_comment;
	v->a[16352] = actions(53);
	v->a[16353] = 1;
	v->a[16354] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16355] = actions(55);
	v->a[16356] = 1;
	v->a[16357] = anon_sym_DOLLAR;
	v->a[16358] = actions(57);
	v->a[16359] = 1;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = anon_sym_DQUOTE;
	v->a[16361] = actions(61);
	v->a[16362] = 1;
	v->a[16363] = anon_sym_DOLLAR_LBRACE;
	v->a[16364] = actions(63);
	v->a[16365] = 1;
	v->a[16366] = anon_sym_DOLLAR_LPAREN;
	v->a[16367] = actions(65);
	v->a[16368] = 1;
	v->a[16369] = anon_sym_BQUOTE;
	v->a[16370] = actions(419);
	v->a[16371] = 1;
	v->a[16372] = sym__bare_dollar;
	v->a[16373] = state(163);
	v->a[16374] = 1;
	v->a[16375] = aux_sym_command_repeat2;
	v->a[16376] = state(570);
	v->a[16377] = 1;
	v->a[16378] = sym_concatenation;
	v->a[16379] = actions(415);
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = 3;
	v->a[16381] = sym_raw_string;
	v->a[16382] = sym_number;
	v->a[16383] = sym_word;
	v->a[16384] = state(289);
	v->a[16385] = 5;
	v->a[16386] = sym_arithmetic_expansion;
	v->a[16387] = sym_string;
	v->a[16388] = sym_simple_expansion;
	v->a[16389] = sym_expansion;
	v->a[16390] = sym_command_substitution;
	v->a[16391] = actions(411);
	v->a[16392] = 11;
	v->a[16393] = anon_sym_PIPE;
	v->a[16394] = anon_sym_RPAREN;
	v->a[16395] = anon_sym_SEMI_SEMI;
	v->a[16396] = anon_sym_AMP_AMP;
	v->a[16397] = anon_sym_PIPE_PIPE;
	v->a[16398] = anon_sym_LT;
	v->a[16399] = anon_sym_GT;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
