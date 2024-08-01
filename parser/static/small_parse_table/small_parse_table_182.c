/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_182.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_910(t_small_parse_table_array *v)
{
	v->a[18200] = 1;
	v->a[18201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18202] = actions(55);
	v->a[18203] = 1;
	v->a[18204] = anon_sym_DOLLAR;
	v->a[18205] = actions(57);
	v->a[18206] = 1;
	v->a[18207] = anon_sym_DQUOTE;
	v->a[18208] = actions(61);
	v->a[18209] = 1;
	v->a[18210] = anon_sym_DOLLAR_LBRACE;
	v->a[18211] = actions(63);
	v->a[18212] = 1;
	v->a[18213] = anon_sym_DOLLAR_LPAREN;
	v->a[18214] = actions(65);
	v->a[18215] = 1;
	v->a[18216] = anon_sym_BQUOTE;
	v->a[18217] = actions(419);
	v->a[18218] = 1;
	v->a[18219] = sym__bare_dollar;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = state(189);
	v->a[18221] = 1;
	v->a[18222] = aux_sym_command_repeat2;
	v->a[18223] = state(570);
	v->a[18224] = 1;
	v->a[18225] = sym_concatenation;
	v->a[18226] = actions(602);
	v->a[18227] = 3;
	v->a[18228] = sym_raw_string;
	v->a[18229] = sym_number;
	v->a[18230] = sym_word;
	v->a[18231] = state(431);
	v->a[18232] = 5;
	v->a[18233] = sym_arithmetic_expansion;
	v->a[18234] = sym_string;
	v->a[18235] = sym_simple_expansion;
	v->a[18236] = sym_expansion;
	v->a[18237] = sym_command_substitution;
	v->a[18238] = actions(411);
	v->a[18239] = 10;
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = anon_sym_PIPE;
	v->a[18241] = anon_sym_SEMI_SEMI;
	v->a[18242] = anon_sym_AMP_AMP;
	v->a[18243] = anon_sym_PIPE_PIPE;
	v->a[18244] = anon_sym_LT;
	v->a[18245] = anon_sym_GT;
	v->a[18246] = anon_sym_GT_GT;
	v->a[18247] = anon_sym_LT_LT;
	v->a[18248] = aux_sym_heredoc_redirect_token1;
	v->a[18249] = anon_sym_SEMI;
	v->a[18250] = 11;
	v->a[18251] = actions(3);
	v->a[18252] = 1;
	v->a[18253] = sym_comment;
	v->a[18254] = actions(580);
	v->a[18255] = 1;
	v->a[18256] = anon_sym_PIPE;
	v->a[18257] = actions(597);
	v->a[18258] = 1;
	v->a[18259] = anon_sym_LT_LT;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = actions(697);
	v->a[18261] = 1;
	v->a[18262] = sym_variable_name;
	v->a[18263] = actions(716);
	v->a[18264] = 1;
	v->a[18265] = ts_builtin_sym_end;
	v->a[18266] = state(510);
	v->a[18267] = 1;
	v->a[18268] = sym_terminator;
	v->a[18269] = actions(695);
	v->a[18270] = 2;
	v->a[18271] = anon_sym_AMP_AMP;
	v->a[18272] = anon_sym_PIPE_PIPE;
	v->a[18273] = state(924);
	v->a[18274] = 2;
	v->a[18275] = sym_variable_assignment;
	v->a[18276] = aux_sym__variable_assignments_repeat1;
	v->a[18277] = actions(693);
	v->a[18278] = 3;
	v->a[18279] = anon_sym_SEMI_SEMI;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = aux_sym_heredoc_redirect_token1;
	v->a[18281] = anon_sym_SEMI;
	v->a[18282] = state(922);
	v->a[18283] = 3;
	v->a[18284] = sym_file_redirect;
	v->a[18285] = sym_heredoc_redirect;
	v->a[18286] = aux_sym_redirected_statement_repeat1;
	v->a[18287] = actions(576);
	v->a[18288] = 12;
	v->a[18289] = anon_sym_LT;
	v->a[18290] = anon_sym_GT;
	v->a[18291] = anon_sym_GT_GT;
	v->a[18292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18293] = anon_sym_DOLLAR;
	v->a[18294] = anon_sym_DQUOTE;
	v->a[18295] = sym_raw_string;
	v->a[18296] = sym_number;
	v->a[18297] = anon_sym_DOLLAR_LBRACE;
	v->a[18298] = anon_sym_DOLLAR_LPAREN;
	v->a[18299] = anon_sym_BQUOTE;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
