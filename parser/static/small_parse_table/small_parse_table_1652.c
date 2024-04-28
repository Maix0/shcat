/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1652.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8260(t_small_parse_table_array *v)
{
	v->a[165200] = 3;
	v->a[165201] = anon_sym_STAR;
	v->a[165202] = anon_sym_SLASH;
	v->a[165203] = anon_sym_PERCENT;
	v->a[165204] = actions(7174);
	v->a[165205] = 11;
	v->a[165206] = anon_sym_PLUS_EQ;
	v->a[165207] = anon_sym_DASH_EQ;
	v->a[165208] = anon_sym_STAR_EQ;
	v->a[165209] = anon_sym_SLASH_EQ;
	v->a[165210] = anon_sym_PERCENT_EQ;
	v->a[165211] = anon_sym_STAR_STAR_EQ;
	v->a[165212] = anon_sym_LT_LT_EQ;
	v->a[165213] = anon_sym_GT_GT_EQ;
	v->a[165214] = anon_sym_AMP_EQ;
	v->a[165215] = anon_sym_CARET_EQ;
	v->a[165216] = anon_sym_PIPE_EQ;
	v->a[165217] = 25;
	v->a[165218] = actions(71);
	v->a[165219] = 1;
	small_parse_table_8261(v);
}

void	small_parse_table_8261(t_small_parse_table_array *v)
{
	v->a[165220] = sym_comment;
	v->a[165221] = actions(6474);
	v->a[165222] = 1;
	v->a[165223] = sym_word;
	v->a[165224] = actions(6480);
	v->a[165225] = 1;
	v->a[165226] = anon_sym_LPAREN;
	v->a[165227] = actions(6488);
	v->a[165228] = 1;
	v->a[165229] = anon_sym_DOLLAR;
	v->a[165230] = actions(6494);
	v->a[165231] = 1;
	v->a[165232] = aux_sym_number_token1;
	v->a[165233] = actions(6496);
	v->a[165234] = 1;
	v->a[165235] = aux_sym_number_token2;
	v->a[165236] = actions(6500);
	v->a[165237] = 1;
	v->a[165238] = anon_sym_DOLLAR_LPAREN;
	v->a[165239] = actions(6508);
	small_parse_table_8262(v);
}

void	small_parse_table_8262(t_small_parse_table_array *v)
{
	v->a[165240] = 1;
	v->a[165241] = sym_test_operator;
	v->a[165242] = actions(6510);
	v->a[165243] = 1;
	v->a[165244] = sym_extglob_pattern;
	v->a[165245] = actions(6512);
	v->a[165246] = 1;
	v->a[165247] = sym__brace_start;
	v->a[165248] = actions(6616);
	v->a[165249] = 1;
	v->a[165250] = anon_sym_esac;
	v->a[165251] = actions(7226);
	v->a[165252] = 1;
	v->a[165253] = anon_sym_DOLLAR_LBRACK;
	v->a[165254] = actions(7228);
	v->a[165255] = 1;
	v->a[165256] = sym__special_character;
	v->a[165257] = actions(7230);
	v->a[165258] = 1;
	v->a[165259] = anon_sym_DQUOTE;
	small_parse_table_8263(v);
}

void	small_parse_table_8263(t_small_parse_table_array *v)
{
	v->a[165260] = actions(7234);
	v->a[165261] = 1;
	v->a[165262] = anon_sym_DOLLAR_LBRACE;
	v->a[165263] = actions(7236);
	v->a[165264] = 1;
	v->a[165265] = anon_sym_BQUOTE;
	v->a[165266] = actions(7238);
	v->a[165267] = 1;
	v->a[165268] = anon_sym_DOLLAR_BQUOTE;
	v->a[165269] = state(6426);
	v->a[165270] = 1;
	v->a[165271] = aux_sym__literal_repeat1;
	v->a[165272] = state(7440);
	v->a[165273] = 1;
	v->a[165274] = sym_last_case_item;
	v->a[165275] = actions(7224);
	v->a[165276] = 2;
	v->a[165277] = anon_sym_LPAREN_LPAREN;
	v->a[165278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165279] = actions(7232);
	small_parse_table_8264(v);
}

void	small_parse_table_8264(t_small_parse_table_array *v)
{
	v->a[165280] = 2;
	v->a[165281] = sym_raw_string;
	v->a[165282] = sym_ansi_c_string;
	v->a[165283] = actions(7240);
	v->a[165284] = 2;
	v->a[165285] = anon_sym_LT_LPAREN;
	v->a[165286] = anon_sym_GT_LPAREN;
	v->a[165287] = state(3419);
	v->a[165288] = 2;
	v->a[165289] = sym_case_item;
	v->a[165290] = aux_sym_case_statement_repeat1;
	v->a[165291] = state(6695);
	v->a[165292] = 2;
	v->a[165293] = sym_concatenation;
	v->a[165294] = sym__extglob_blob;
	v->a[165295] = state(6303);
	v->a[165296] = 9;
	v->a[165297] = sym_arithmetic_expansion;
	v->a[165298] = sym_brace_expression;
	v->a[165299] = sym_string;
	small_parse_table_8265(v);
}

/* EOF small_parse_table_1652.c */
