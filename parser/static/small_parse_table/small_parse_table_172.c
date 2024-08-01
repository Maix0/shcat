/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_172.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_860(t_small_parse_table_array *v)
{
	v->a[17200] = sym_simple_expansion;
	v->a[17201] = sym_expansion;
	v->a[17202] = sym_command_substitution;
	v->a[17203] = actions(428);
	v->a[17204] = 11;
	v->a[17205] = anon_sym_PIPE;
	v->a[17206] = anon_sym_RPAREN;
	v->a[17207] = anon_sym_SEMI_SEMI;
	v->a[17208] = anon_sym_AMP_AMP;
	v->a[17209] = anon_sym_PIPE_PIPE;
	v->a[17210] = anon_sym_LT;
	v->a[17211] = anon_sym_GT;
	v->a[17212] = anon_sym_GT_GT;
	v->a[17213] = anon_sym_LT_LT;
	v->a[17214] = aux_sym_heredoc_redirect_token1;
	v->a[17215] = anon_sym_SEMI;
	v->a[17216] = 11;
	v->a[17217] = actions(3);
	v->a[17218] = 1;
	v->a[17219] = sym_comment;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = actions(580);
	v->a[17221] = 1;
	v->a[17222] = anon_sym_PIPE;
	v->a[17223] = actions(584);
	v->a[17224] = 1;
	v->a[17225] = anon_sym_LT_LT;
	v->a[17226] = actions(588);
	v->a[17227] = 1;
	v->a[17228] = sym_variable_name;
	v->a[17229] = state(381);
	v->a[17230] = 1;
	v->a[17231] = sym_terminator;
	v->a[17232] = actions(578);
	v->a[17233] = 2;
	v->a[17234] = anon_sym_esac;
	v->a[17235] = anon_sym_SEMI_SEMI;
	v->a[17236] = actions(582);
	v->a[17237] = 2;
	v->a[17238] = anon_sym_AMP_AMP;
	v->a[17239] = anon_sym_PIPE_PIPE;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = actions(586);
	v->a[17241] = 2;
	v->a[17242] = aux_sym_heredoc_redirect_token1;
	v->a[17243] = anon_sym_SEMI;
	v->a[17244] = state(970);
	v->a[17245] = 2;
	v->a[17246] = sym_variable_assignment;
	v->a[17247] = aux_sym__variable_assignments_repeat1;
	v->a[17248] = state(971);
	v->a[17249] = 3;
	v->a[17250] = sym_file_redirect;
	v->a[17251] = sym_heredoc_redirect;
	v->a[17252] = aux_sym_redirected_statement_repeat1;
	v->a[17253] = actions(576);
	v->a[17254] = 12;
	v->a[17255] = anon_sym_LT;
	v->a[17256] = anon_sym_GT;
	v->a[17257] = anon_sym_GT_GT;
	v->a[17258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17259] = anon_sym_DOLLAR;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = anon_sym_DQUOTE;
	v->a[17261] = sym_raw_string;
	v->a[17262] = sym_number;
	v->a[17263] = anon_sym_DOLLAR_LBRACE;
	v->a[17264] = anon_sym_DOLLAR_LPAREN;
	v->a[17265] = anon_sym_BQUOTE;
	v->a[17266] = sym_word;
	v->a[17267] = 11;
	v->a[17268] = actions(3);
	v->a[17269] = 1;
	v->a[17270] = sym_comment;
	v->a[17271] = actions(580);
	v->a[17272] = 1;
	v->a[17273] = anon_sym_PIPE;
	v->a[17274] = actions(591);
	v->a[17275] = 1;
	v->a[17276] = anon_sym_RPAREN;
	v->a[17277] = actions(597);
	v->a[17278] = 1;
	v->a[17279] = anon_sym_LT_LT;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = actions(599);
	v->a[17281] = 1;
	v->a[17282] = sym_variable_name;
	v->a[17283] = state(361);
	v->a[17284] = 1;
	v->a[17285] = sym_terminator;
	v->a[17286] = actions(595);
	v->a[17287] = 2;
	v->a[17288] = anon_sym_AMP_AMP;
	v->a[17289] = anon_sym_PIPE_PIPE;
	v->a[17290] = state(963);
	v->a[17291] = 2;
	v->a[17292] = sym_variable_assignment;
	v->a[17293] = aux_sym__variable_assignments_repeat1;
	v->a[17294] = actions(593);
	v->a[17295] = 3;
	v->a[17296] = anon_sym_SEMI_SEMI;
	v->a[17297] = aux_sym_heredoc_redirect_token1;
	v->a[17298] = anon_sym_SEMI;
	v->a[17299] = state(916);
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
