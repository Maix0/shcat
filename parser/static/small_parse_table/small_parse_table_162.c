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
	v->a[16200] = actions(2468);
	v->a[16201] = 1;
	v->a[16202] = aux_sym_number_token2;
	v->a[16203] = actions(2470);
	v->a[16204] = 1;
	v->a[16205] = anon_sym_DOLLAR_LBRACE;
	v->a[16206] = actions(2472);
	v->a[16207] = 1;
	v->a[16208] = anon_sym_DOLLAR_LPAREN;
	v->a[16209] = actions(2474);
	v->a[16210] = 1;
	v->a[16211] = anon_sym_BQUOTE;
	v->a[16212] = actions(2476);
	v->a[16213] = 1;
	v->a[16214] = anon_sym_DOLLAR_BQUOTE;
	v->a[16215] = actions(2478);
	v->a[16216] = 1;
	v->a[16217] = sym_file_descriptor;
	v->a[16218] = actions(2480);
	v->a[16219] = 1;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = sym_test_operator;
	v->a[16221] = actions(2482);
	v->a[16222] = 1;
	v->a[16223] = sym__brace_start;
	v->a[16224] = actions(2646);
	v->a[16225] = 1;
	v->a[16226] = aux_sym_heredoc_redirect_token1;
	v->a[16227] = state(2134);
	v->a[16228] = 1;
	v->a[16229] = aux_sym__heredoc_command;
	v->a[16230] = state(2852);
	v->a[16231] = 1;
	v->a[16232] = aux_sym__literal_repeat1;
	v->a[16233] = state(2882);
	v->a[16234] = 1;
	v->a[16235] = sym_concatenation;
	v->a[16236] = state(3950);
	v->a[16237] = 1;
	v->a[16238] = sym__heredoc_expression;
	v->a[16239] = state(3963);
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = 1;
	v->a[16241] = sym__heredoc_pipeline;
	v->a[16242] = actions(2446);
	v->a[16243] = 2;
	v->a[16244] = sym_raw_string;
	v->a[16245] = sym_word;
	v->a[16246] = actions(2448);
	v->a[16247] = 2;
	v->a[16248] = anon_sym_PIPE;
	v->a[16249] = anon_sym_PIPE_AMP;
	v->a[16250] = actions(2450);
	v->a[16251] = 2;
	v->a[16252] = anon_sym_AMP_AMP;
	v->a[16253] = anon_sym_PIPE_PIPE;
	v->a[16254] = actions(2454);
	v->a[16255] = 2;
	v->a[16256] = anon_sym_LT_AMP_DASH;
	v->a[16257] = anon_sym_GT_AMP_DASH;
	v->a[16258] = state(2722);
	v->a[16259] = 2;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = sym_file_redirect;
	v->a[16261] = aux_sym_redirected_statement_repeat2;
	v->a[16262] = state(2716);
	v->a[16263] = 7;
	v->a[16264] = sym_arithmetic_expansion;
	v->a[16265] = sym_brace_expression;
	v->a[16266] = sym_string;
	v->a[16267] = sym_number;
	v->a[16268] = sym_simple_expansion;
	v->a[16269] = sym_expansion;
	v->a[16270] = sym_command_substitution;
	v->a[16271] = actions(2452);
	v->a[16272] = 8;
	v->a[16273] = anon_sym_LT;
	v->a[16274] = anon_sym_GT;
	v->a[16275] = anon_sym_GT_GT;
	v->a[16276] = anon_sym_AMP_GT;
	v->a[16277] = anon_sym_AMP_GT_GT;
	v->a[16278] = anon_sym_LT_AMP;
	v->a[16279] = anon_sym_GT_AMP;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = anon_sym_GT_PIPE;
	v->a[16281] = 18;
	v->a[16282] = actions(3);
	v->a[16283] = 1;
	v->a[16284] = sym_comment;
	v->a[16285] = actions(2354);
	v->a[16286] = 1;
	v->a[16287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16288] = actions(2356);
	v->a[16289] = 1;
	v->a[16290] = anon_sym_DOLLAR;
	v->a[16291] = actions(2360);
	v->a[16292] = 1;
	v->a[16293] = anon_sym_DQUOTE;
	v->a[16294] = actions(2362);
	v->a[16295] = 1;
	v->a[16296] = aux_sym_number_token1;
	v->a[16297] = actions(2364);
	v->a[16298] = 1;
	v->a[16299] = aux_sym_number_token2;
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
