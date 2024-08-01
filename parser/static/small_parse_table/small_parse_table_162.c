/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_162.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_810(t_small_parse_table_array *v)
{
	v->a[16200] = 1;
	v->a[16201] = sym_comment;
	v->a[16202] = actions(53);
	v->a[16203] = 1;
	v->a[16204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16205] = actions(55);
	v->a[16206] = 1;
	v->a[16207] = anon_sym_DOLLAR;
	v->a[16208] = actions(57);
	v->a[16209] = 1;
	v->a[16210] = anon_sym_DQUOTE;
	v->a[16211] = actions(61);
	v->a[16212] = 1;
	v->a[16213] = anon_sym_DOLLAR_LBRACE;
	v->a[16214] = actions(63);
	v->a[16215] = 1;
	v->a[16216] = anon_sym_DOLLAR_LPAREN;
	v->a[16217] = actions(65);
	v->a[16218] = 1;
	v->a[16219] = anon_sym_BQUOTE;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = actions(419);
	v->a[16221] = 1;
	v->a[16222] = sym__bare_dollar;
	v->a[16223] = state(161);
	v->a[16224] = 1;
	v->a[16225] = aux_sym_command_repeat2;
	v->a[16226] = state(570);
	v->a[16227] = 1;
	v->a[16228] = sym_concatenation;
	v->a[16229] = actions(415);
	v->a[16230] = 3;
	v->a[16231] = sym_raw_string;
	v->a[16232] = sym_number;
	v->a[16233] = sym_word;
	v->a[16234] = state(289);
	v->a[16235] = 5;
	v->a[16236] = sym_arithmetic_expansion;
	v->a[16237] = sym_string;
	v->a[16238] = sym_simple_expansion;
	v->a[16239] = sym_expansion;
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = sym_command_substitution;
	v->a[16241] = actions(417);
	v->a[16242] = 11;
	v->a[16243] = anon_sym_PIPE;
	v->a[16244] = anon_sym_RPAREN;
	v->a[16245] = anon_sym_SEMI_SEMI;
	v->a[16246] = anon_sym_AMP_AMP;
	v->a[16247] = anon_sym_PIPE_PIPE;
	v->a[16248] = anon_sym_LT;
	v->a[16249] = anon_sym_GT;
	v->a[16250] = anon_sym_GT_GT;
	v->a[16251] = anon_sym_LT_LT;
	v->a[16252] = aux_sym_heredoc_redirect_token1;
	v->a[16253] = anon_sym_SEMI;
	v->a[16254] = 5;
	v->a[16255] = actions(3);
	v->a[16256] = 1;
	v->a[16257] = sym_comment;
	v->a[16258] = actions(423);
	v->a[16259] = 1;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = sym_variable_name;
	v->a[16261] = state(176);
	v->a[16262] = 2;
	v->a[16263] = sym_concatenation;
	v->a[16264] = aux_sym_for_statement_repeat1;
	v->a[16265] = state(292);
	v->a[16266] = 5;
	v->a[16267] = sym_arithmetic_expansion;
	v->a[16268] = sym_string;
	v->a[16269] = sym_simple_expansion;
	v->a[16270] = sym_expansion;
	v->a[16271] = sym_command_substitution;
	v->a[16272] = actions(421);
	v->a[16273] = 20;
	v->a[16274] = anon_sym_PIPE;
	v->a[16275] = anon_sym_RPAREN;
	v->a[16276] = anon_sym_SEMI_SEMI;
	v->a[16277] = anon_sym_AMP_AMP;
	v->a[16278] = anon_sym_PIPE_PIPE;
	v->a[16279] = anon_sym_LT;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = anon_sym_GT;
	v->a[16281] = anon_sym_GT_GT;
	v->a[16282] = anon_sym_LT_LT;
	v->a[16283] = aux_sym_heredoc_redirect_token1;
	v->a[16284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16285] = anon_sym_DOLLAR;
	v->a[16286] = anon_sym_DQUOTE;
	v->a[16287] = sym_raw_string;
	v->a[16288] = sym_number;
	v->a[16289] = anon_sym_DOLLAR_LBRACE;
	v->a[16290] = anon_sym_DOLLAR_LPAREN;
	v->a[16291] = anon_sym_BQUOTE;
	v->a[16292] = sym_word;
	v->a[16293] = anon_sym_SEMI;
	v->a[16294] = 12;
	v->a[16295] = actions(3);
	v->a[16296] = 1;
	v->a[16297] = sym_comment;
	v->a[16298] = actions(430);
	v->a[16299] = 1;
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
