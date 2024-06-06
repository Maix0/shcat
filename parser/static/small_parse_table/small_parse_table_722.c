/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_722.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3610(t_small_parse_table_array *v)
{
	v->a[72200] = anon_sym_PIPE;
	v->a[72201] = anon_sym_RPAREN;
	v->a[72202] = anon_sym_SEMI_SEMI;
	v->a[72203] = anon_sym_PIPE_AMP;
	v->a[72204] = anon_sym_AMP_AMP;
	v->a[72205] = anon_sym_PIPE_PIPE;
	v->a[72206] = anon_sym_LT;
	v->a[72207] = anon_sym_GT;
	v->a[72208] = anon_sym_GT_GT;
	v->a[72209] = anon_sym_AMP_GT;
	v->a[72210] = anon_sym_AMP_GT_GT;
	v->a[72211] = anon_sym_LT_AMP;
	v->a[72212] = anon_sym_GT_AMP;
	v->a[72213] = anon_sym_GT_PIPE;
	v->a[72214] = anon_sym_LT_AMP_DASH;
	v->a[72215] = anon_sym_GT_AMP_DASH;
	v->a[72216] = anon_sym_LT_LT;
	v->a[72217] = anon_sym_LT_LT_DASH;
	v->a[72218] = aux_sym_heredoc_redirect_token1;
	v->a[72219] = anon_sym_AMP;
	small_parse_table_3611(v);
}

void	small_parse_table_3611(t_small_parse_table_array *v)
{
	v->a[72220] = anon_sym_SEMI;
	v->a[72221] = 24;
	v->a[72222] = actions(3);
	v->a[72223] = 1;
	v->a[72224] = sym_comment;
	v->a[72225] = actions(4332);
	v->a[72226] = 1;
	v->a[72227] = anon_sym_LPAREN;
	v->a[72228] = actions(4338);
	v->a[72229] = 1;
	v->a[72230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72231] = actions(4340);
	v->a[72232] = 1;
	v->a[72233] = anon_sym_DOLLAR;
	v->a[72234] = actions(4342);
	v->a[72235] = 1;
	v->a[72236] = sym__special_character;
	v->a[72237] = actions(4344);
	v->a[72238] = 1;
	v->a[72239] = anon_sym_DQUOTE;
	small_parse_table_3612(v);
}

void	small_parse_table_3612(t_small_parse_table_array *v)
{
	v->a[72240] = actions(4346);
	v->a[72241] = 1;
	v->a[72242] = aux_sym_number_token1;
	v->a[72243] = actions(4348);
	v->a[72244] = 1;
	v->a[72245] = aux_sym_number_token2;
	v->a[72246] = actions(4350);
	v->a[72247] = 1;
	v->a[72248] = anon_sym_DOLLAR_LBRACE;
	v->a[72249] = actions(4352);
	v->a[72250] = 1;
	v->a[72251] = anon_sym_DOLLAR_LPAREN;
	v->a[72252] = actions(4354);
	v->a[72253] = 1;
	v->a[72254] = anon_sym_BQUOTE;
	v->a[72255] = actions(4356);
	v->a[72256] = 1;
	v->a[72257] = anon_sym_DOLLAR_BQUOTE;
	v->a[72258] = actions(4358);
	v->a[72259] = 1;
	small_parse_table_3613(v);
}

void	small_parse_table_3613(t_small_parse_table_array *v)
{
	v->a[72260] = sym_test_operator;
	v->a[72261] = actions(4360);
	v->a[72262] = 1;
	v->a[72263] = sym_extglob_pattern;
	v->a[72264] = actions(4362);
	v->a[72265] = 1;
	v->a[72266] = sym__brace_start;
	v->a[72267] = actions(4376);
	v->a[72268] = 1;
	v->a[72269] = anon_sym_esac;
	v->a[72270] = actions(4380);
	v->a[72271] = 1;
	v->a[72272] = aux_sym_heredoc_redirect_token1;
	v->a[72273] = state(3393);
	v->a[72274] = 1;
	v->a[72275] = aux_sym__literal_repeat1;
	v->a[72276] = state(3870);
	v->a[72277] = 1;
	v->a[72278] = sym_last_case_item;
	v->a[72279] = actions(4328);
	small_parse_table_3614(v);
}

void	small_parse_table_3614(t_small_parse_table_array *v)
{
	v->a[72280] = 2;
	v->a[72281] = sym_raw_string;
	v->a[72282] = sym_word;
	v->a[72283] = state(1740);
	v->a[72284] = 2;
	v->a[72285] = sym_case_item;
	v->a[72286] = aux_sym_case_statement_repeat1;
	v->a[72287] = state(3472);
	v->a[72288] = 2;
	v->a[72289] = sym_concatenation;
	v->a[72290] = sym__extglob_blob;
	v->a[72291] = actions(4378);
	v->a[72292] = 3;
	v->a[72293] = anon_sym_SEMI_SEMI;
	v->a[72294] = anon_sym_AMP;
	v->a[72295] = anon_sym_SEMI;
	v->a[72296] = state(3295);
	v->a[72297] = 7;
	v->a[72298] = sym_arithmetic_expansion;
	v->a[72299] = sym_brace_expression;
	small_parse_table_3615(v);
}

/* EOF small_parse_table_722.c */
