/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_812.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4060(t_small_parse_table_array *v)
{
	v->a[81200] = anon_sym_GT;
	v->a[81201] = anon_sym_GT_GT;
	v->a[81202] = anon_sym_AMP_GT;
	v->a[81203] = anon_sym_AMP_GT_GT;
	v->a[81204] = anon_sym_LT_AMP;
	v->a[81205] = anon_sym_GT_AMP;
	v->a[81206] = anon_sym_GT_PIPE;
	v->a[81207] = anon_sym_LT_AMP_DASH;
	v->a[81208] = anon_sym_GT_AMP_DASH;
	v->a[81209] = anon_sym_LT_LT;
	v->a[81210] = anon_sym_LT_LT_DASH;
	v->a[81211] = anon_sym_AMP;
	v->a[81212] = anon_sym_SEMI;
	v->a[81213] = 3;
	v->a[81214] = actions(3);
	v->a[81215] = 1;
	v->a[81216] = sym_comment;
	v->a[81217] = actions(2771);
	v->a[81218] = 2;
	v->a[81219] = sym_file_descriptor;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = aux_sym_heredoc_redirect_token1;
	v->a[81221] = actions(2773);
	v->a[81222] = 19;
	v->a[81223] = anon_sym_esac;
	v->a[81224] = anon_sym_PIPE;
	v->a[81225] = anon_sym_SEMI_SEMI;
	v->a[81226] = anon_sym_AMP_AMP;
	v->a[81227] = anon_sym_PIPE_PIPE;
	v->a[81228] = anon_sym_LT;
	v->a[81229] = anon_sym_GT;
	v->a[81230] = anon_sym_GT_GT;
	v->a[81231] = anon_sym_AMP_GT;
	v->a[81232] = anon_sym_AMP_GT_GT;
	v->a[81233] = anon_sym_LT_AMP;
	v->a[81234] = anon_sym_GT_AMP;
	v->a[81235] = anon_sym_GT_PIPE;
	v->a[81236] = anon_sym_LT_AMP_DASH;
	v->a[81237] = anon_sym_GT_AMP_DASH;
	v->a[81238] = anon_sym_LT_LT;
	v->a[81239] = anon_sym_LT_LT_DASH;
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = anon_sym_AMP;
	v->a[81241] = anon_sym_SEMI;
	v->a[81242] = 11;
	v->a[81243] = actions(3);
	v->a[81244] = 1;
	v->a[81245] = sym_comment;
	v->a[81246] = actions(884);
	v->a[81247] = 1;
	v->a[81248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81249] = actions(886);
	v->a[81250] = 1;
	v->a[81251] = anon_sym_DOLLAR;
	v->a[81252] = actions(888);
	v->a[81253] = 1;
	v->a[81254] = anon_sym_DQUOTE;
	v->a[81255] = actions(890);
	v->a[81256] = 1;
	v->a[81257] = anon_sym_DOLLAR_LBRACE;
	v->a[81258] = actions(892);
	v->a[81259] = 1;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = anon_sym_DOLLAR_LPAREN;
	v->a[81261] = actions(894);
	v->a[81262] = 1;
	v->a[81263] = anon_sym_BQUOTE;
	v->a[81264] = state(1545);
	v->a[81265] = 2;
	v->a[81266] = sym_concatenation;
	v->a[81267] = aux_sym_for_statement_repeat1;
	v->a[81268] = actions(2924);
	v->a[81269] = 3;
	v->a[81270] = sym_raw_string;
	v->a[81271] = sym_number;
	v->a[81272] = sym_word;
	v->a[81273] = actions(2926);
	v->a[81274] = 4;
	v->a[81275] = anon_sym_SEMI_SEMI;
	v->a[81276] = aux_sym_heredoc_redirect_token1;
	v->a[81277] = anon_sym_AMP;
	v->a[81278] = anon_sym_SEMI;
	v->a[81279] = state(1745);
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = 5;
	v->a[81281] = sym_arithmetic_expansion;
	v->a[81282] = sym_string;
	v->a[81283] = sym_simple_expansion;
	v->a[81284] = sym_expansion;
	v->a[81285] = sym_command_substitution;
	v->a[81286] = 5;
	v->a[81287] = actions(3);
	v->a[81288] = 1;
	v->a[81289] = sym_comment;
	v->a[81290] = actions(2928);
	v->a[81291] = 1;
	v->a[81292] = sym_variable_name;
	v->a[81293] = actions(2117);
	v->a[81294] = 2;
	v->a[81295] = sym_file_descriptor;
	v->a[81296] = aux_sym_heredoc_redirect_token1;
	v->a[81297] = state(1540);
	v->a[81298] = 2;
	v->a[81299] = sym_variable_assignment;
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
