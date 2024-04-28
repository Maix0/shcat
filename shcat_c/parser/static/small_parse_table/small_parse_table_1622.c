/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1622.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8110(t_small_parse_table_array *v)
{
	v->a[162200] = actions(7450);
	v->a[162201] = 1;
	v->a[162202] = aux_sym_heredoc_redirect_token1;
	v->a[162203] = actions(7448);
	v->a[162204] = 36;
	v->a[162205] = anon_sym_SEMI;
	v->a[162206] = anon_sym_COMMA;
	v->a[162207] = anon_sym_PLUS_PLUS;
	v->a[162208] = anon_sym_DASH_DASH;
	v->a[162209] = anon_sym_PLUS_EQ;
	v->a[162210] = anon_sym_DASH_EQ;
	v->a[162211] = anon_sym_STAR_EQ;
	v->a[162212] = anon_sym_SLASH_EQ;
	v->a[162213] = anon_sym_PERCENT_EQ;
	v->a[162214] = anon_sym_STAR_STAR_EQ;
	v->a[162215] = anon_sym_LT_LT_EQ;
	v->a[162216] = anon_sym_GT_GT_EQ;
	v->a[162217] = anon_sym_AMP_EQ;
	v->a[162218] = anon_sym_CARET_EQ;
	v->a[162219] = anon_sym_PIPE_EQ;
	small_parse_table_8111(v);
}

void	small_parse_table_8111(t_small_parse_table_array *v)
{
	v->a[162220] = anon_sym_PIPE_PIPE;
	v->a[162221] = anon_sym_DASHo;
	v->a[162222] = anon_sym_AMP_AMP;
	v->a[162223] = anon_sym_DASHa;
	v->a[162224] = anon_sym_PIPE;
	v->a[162225] = anon_sym_CARET;
	v->a[162226] = anon_sym_AMP;
	v->a[162227] = anon_sym_EQ_EQ;
	v->a[162228] = anon_sym_BANG_EQ;
	v->a[162229] = anon_sym_LT;
	v->a[162230] = anon_sym_GT;
	v->a[162231] = anon_sym_LT_EQ;
	v->a[162232] = anon_sym_GT_EQ;
	v->a[162233] = anon_sym_LT_LT;
	v->a[162234] = anon_sym_GT_GT;
	v->a[162235] = anon_sym_PLUS;
	v->a[162236] = anon_sym_DASH;
	v->a[162237] = anon_sym_STAR;
	v->a[162238] = anon_sym_SLASH;
	v->a[162239] = anon_sym_PERCENT;
	small_parse_table_8112(v);
}

void	small_parse_table_8112(t_small_parse_table_array *v)
{
	v->a[162240] = anon_sym_STAR_STAR;
	v->a[162241] = 25;
	v->a[162242] = actions(71);
	v->a[162243] = 1;
	v->a[162244] = sym_comment;
	v->a[162245] = actions(6474);
	v->a[162246] = 1;
	v->a[162247] = sym_word;
	v->a[162248] = actions(6480);
	v->a[162249] = 1;
	v->a[162250] = anon_sym_LPAREN;
	v->a[162251] = actions(6488);
	v->a[162252] = 1;
	v->a[162253] = anon_sym_DOLLAR;
	v->a[162254] = actions(6494);
	v->a[162255] = 1;
	v->a[162256] = aux_sym_number_token1;
	v->a[162257] = actions(6496);
	v->a[162258] = 1;
	v->a[162259] = aux_sym_number_token2;
	small_parse_table_8113(v);
}

void	small_parse_table_8113(t_small_parse_table_array *v)
{
	v->a[162260] = actions(6500);
	v->a[162261] = 1;
	v->a[162262] = anon_sym_DOLLAR_LPAREN;
	v->a[162263] = actions(6508);
	v->a[162264] = 1;
	v->a[162265] = sym_test_operator;
	v->a[162266] = actions(6510);
	v->a[162267] = 1;
	v->a[162268] = sym_extglob_pattern;
	v->a[162269] = actions(6512);
	v->a[162270] = 1;
	v->a[162271] = sym__brace_start;
	v->a[162272] = actions(6551);
	v->a[162273] = 1;
	v->a[162274] = anon_sym_esac;
	v->a[162275] = actions(7226);
	v->a[162276] = 1;
	v->a[162277] = anon_sym_DOLLAR_LBRACK;
	v->a[162278] = actions(7228);
	v->a[162279] = 1;
	small_parse_table_8114(v);
}

void	small_parse_table_8114(t_small_parse_table_array *v)
{
	v->a[162280] = sym__special_character;
	v->a[162281] = actions(7230);
	v->a[162282] = 1;
	v->a[162283] = anon_sym_DQUOTE;
	v->a[162284] = actions(7234);
	v->a[162285] = 1;
	v->a[162286] = anon_sym_DOLLAR_LBRACE;
	v->a[162287] = actions(7236);
	v->a[162288] = 1;
	v->a[162289] = anon_sym_BQUOTE;
	v->a[162290] = actions(7238);
	v->a[162291] = 1;
	v->a[162292] = anon_sym_DOLLAR_BQUOTE;
	v->a[162293] = state(6426);
	v->a[162294] = 1;
	v->a[162295] = aux_sym__literal_repeat1;
	v->a[162296] = state(7007);
	v->a[162297] = 1;
	v->a[162298] = sym_last_case_item;
	v->a[162299] = actions(7224);
	small_parse_table_8115(v);
}

/* EOF small_parse_table_1622.c */
