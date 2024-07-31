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
	v->a[16200] = 2;
	v->a[16201] = aux_sym__simple_variable_name_token1;
	v->a[16202] = aux_sym__multiline_variable_name_token1;
	v->a[16203] = actions(359);
	v->a[16204] = 8;
	v->a[16205] = anon_sym_BANG;
	v->a[16206] = anon_sym_DASH;
	v->a[16207] = anon_sym_STAR;
	v->a[16208] = anon_sym_QMARK;
	v->a[16209] = anon_sym_DOLLAR;
	v->a[16210] = anon_sym_POUND;
	v->a[16211] = anon_sym_AT;
	v->a[16212] = anon_sym_0;
	v->a[16213] = actions(345);
	v->a[16214] = 24;
	v->a[16215] = anon_sym_PIPE;
	v->a[16216] = anon_sym_RPAREN;
	v->a[16217] = anon_sym_SEMI_SEMI;
	v->a[16218] = anon_sym_AMP_AMP;
	v->a[16219] = anon_sym_PIPE_PIPE;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = anon_sym_LT;
	v->a[16221] = anon_sym_GT;
	v->a[16222] = anon_sym_GT_GT;
	v->a[16223] = anon_sym_LT_AMP;
	v->a[16224] = anon_sym_GT_AMP;
	v->a[16225] = anon_sym_GT_PIPE;
	v->a[16226] = anon_sym_LT_GT;
	v->a[16227] = anon_sym_LT_LT;
	v->a[16228] = anon_sym_LT_LT_DASH;
	v->a[16229] = aux_sym_heredoc_redirect_token1;
	v->a[16230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16231] = anon_sym_DQUOTE;
	v->a[16232] = sym_raw_string;
	v->a[16233] = sym_number;
	v->a[16234] = anon_sym_DOLLAR_LBRACE;
	v->a[16235] = anon_sym_DOLLAR_LPAREN;
	v->a[16236] = anon_sym_BQUOTE;
	v->a[16237] = sym_word;
	v->a[16238] = anon_sym_SEMI;
	v->a[16239] = 5;
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = actions(3);
	v->a[16241] = 1;
	v->a[16242] = sym_comment;
	v->a[16243] = actions(369);
	v->a[16244] = 1;
	v->a[16245] = sym_variable_name;
	v->a[16246] = actions(367);
	v->a[16247] = 2;
	v->a[16248] = aux_sym__simple_variable_name_token1;
	v->a[16249] = aux_sym__multiline_variable_name_token1;
	v->a[16250] = actions(365);
	v->a[16251] = 8;
	v->a[16252] = anon_sym_BANG;
	v->a[16253] = anon_sym_DASH;
	v->a[16254] = anon_sym_STAR;
	v->a[16255] = anon_sym_QMARK;
	v->a[16256] = anon_sym_DOLLAR;
	v->a[16257] = anon_sym_POUND;
	v->a[16258] = anon_sym_AT;
	v->a[16259] = anon_sym_0;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = actions(345);
	v->a[16261] = 24;
	v->a[16262] = anon_sym_esac;
	v->a[16263] = anon_sym_PIPE;
	v->a[16264] = anon_sym_SEMI_SEMI;
	v->a[16265] = anon_sym_AMP_AMP;
	v->a[16266] = anon_sym_PIPE_PIPE;
	v->a[16267] = anon_sym_LT;
	v->a[16268] = anon_sym_GT;
	v->a[16269] = anon_sym_GT_GT;
	v->a[16270] = anon_sym_LT_AMP;
	v->a[16271] = anon_sym_GT_AMP;
	v->a[16272] = anon_sym_GT_PIPE;
	v->a[16273] = anon_sym_LT_GT;
	v->a[16274] = anon_sym_LT_LT;
	v->a[16275] = anon_sym_LT_LT_DASH;
	v->a[16276] = aux_sym_heredoc_redirect_token1;
	v->a[16277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16278] = anon_sym_DQUOTE;
	v->a[16279] = sym_raw_string;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = sym_number;
	v->a[16281] = anon_sym_DOLLAR_LBRACE;
	v->a[16282] = anon_sym_DOLLAR_LPAREN;
	v->a[16283] = anon_sym_BQUOTE;
	v->a[16284] = sym_word;
	v->a[16285] = anon_sym_SEMI;
	v->a[16286] = 5;
	v->a[16287] = actions(3);
	v->a[16288] = 1;
	v->a[16289] = sym_comment;
	v->a[16290] = actions(375);
	v->a[16291] = 1;
	v->a[16292] = sym_variable_name;
	v->a[16293] = actions(373);
	v->a[16294] = 2;
	v->a[16295] = aux_sym__simple_variable_name_token1;
	v->a[16296] = aux_sym__multiline_variable_name_token1;
	v->a[16297] = actions(371);
	v->a[16298] = 8;
	v->a[16299] = anon_sym_BANG;
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
