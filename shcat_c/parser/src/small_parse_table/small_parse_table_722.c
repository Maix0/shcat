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
	v->a[72200] = sym_variable_name;
	v->a[72201] = sym_test_operator;
	v->a[72202] = sym__brace_start;
	v->a[72203] = ts_builtin_sym_end;
	v->a[72204] = aux_sym_heredoc_redirect_token1;
	v->a[72205] = actions(1340);
	v->a[72206] = 38;
	v->a[72207] = anon_sym_LPAREN_LPAREN;
	v->a[72208] = anon_sym_SEMI;
	v->a[72209] = anon_sym_PIPE_PIPE;
	v->a[72210] = anon_sym_AMP_AMP;
	v->a[72211] = anon_sym_PIPE;
	v->a[72212] = anon_sym_AMP;
	v->a[72213] = anon_sym_LT;
	v->a[72214] = anon_sym_GT;
	v->a[72215] = anon_sym_LT_LT;
	v->a[72216] = anon_sym_GT_GT;
	v->a[72217] = anon_sym_SEMI_SEMI;
	v->a[72218] = anon_sym_PIPE_AMP;
	v->a[72219] = anon_sym_AMP_GT;
	small_parse_table_3611(v);
}

void	small_parse_table_3611(t_small_parse_table_array *v)
{
	v->a[72220] = anon_sym_AMP_GT_GT;
	v->a[72221] = anon_sym_LT_AMP;
	v->a[72222] = anon_sym_GT_AMP;
	v->a[72223] = anon_sym_GT_PIPE;
	v->a[72224] = anon_sym_LT_AMP_DASH;
	v->a[72225] = anon_sym_GT_AMP_DASH;
	v->a[72226] = anon_sym_LT_LT_DASH;
	v->a[72227] = anon_sym_LT_LT_LT;
	v->a[72228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72229] = anon_sym_DOLLAR_LBRACK;
	v->a[72230] = aux_sym_concatenation_token1;
	v->a[72231] = anon_sym_DOLLAR;
	v->a[72232] = sym__special_character;
	v->a[72233] = anon_sym_DQUOTE;
	v->a[72234] = sym_raw_string;
	v->a[72235] = sym_ansi_c_string;
	v->a[72236] = aux_sym_number_token1;
	v->a[72237] = aux_sym_number_token2;
	v->a[72238] = anon_sym_DOLLAR_LBRACE;
	v->a[72239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3612(v);
}

void	small_parse_table_3612(t_small_parse_table_array *v)
{
	v->a[72240] = anon_sym_BQUOTE;
	v->a[72241] = anon_sym_DOLLAR_BQUOTE;
	v->a[72242] = anon_sym_LT_LPAREN;
	v->a[72243] = anon_sym_GT_LPAREN;
	v->a[72244] = sym_word;
	v->a[72245] = 3;
	v->a[72246] = actions(3);
	v->a[72247] = 1;
	v->a[72248] = sym_comment;
	v->a[72249] = actions(5772);
	v->a[72250] = 5;
	v->a[72251] = sym_file_descriptor;
	v->a[72252] = sym_variable_name;
	v->a[72253] = sym_test_operator;
	v->a[72254] = sym__brace_start;
	v->a[72255] = aux_sym_heredoc_redirect_token1;
	v->a[72256] = actions(5770);
	v->a[72257] = 40;
	v->a[72258] = anon_sym_LPAREN_LPAREN;
	v->a[72259] = anon_sym_SEMI;
	small_parse_table_3613(v);
}

void	small_parse_table_3613(t_small_parse_table_array *v)
{
	v->a[72260] = anon_sym_PIPE_PIPE;
	v->a[72261] = anon_sym_AMP_AMP;
	v->a[72262] = anon_sym_PIPE;
	v->a[72263] = anon_sym_AMP;
	v->a[72264] = anon_sym_LT;
	v->a[72265] = anon_sym_GT;
	v->a[72266] = anon_sym_LT_LT;
	v->a[72267] = anon_sym_GT_GT;
	v->a[72268] = anon_sym_esac;
	v->a[72269] = anon_sym_SEMI_SEMI;
	v->a[72270] = anon_sym_SEMI_AMP;
	v->a[72271] = anon_sym_SEMI_SEMI_AMP;
	v->a[72272] = anon_sym_PIPE_AMP;
	v->a[72273] = anon_sym_AMP_GT;
	v->a[72274] = anon_sym_AMP_GT_GT;
	v->a[72275] = anon_sym_LT_AMP;
	v->a[72276] = anon_sym_GT_AMP;
	v->a[72277] = anon_sym_GT_PIPE;
	v->a[72278] = anon_sym_LT_AMP_DASH;
	v->a[72279] = anon_sym_GT_AMP_DASH;
	small_parse_table_3614(v);
}

void	small_parse_table_3614(t_small_parse_table_array *v)
{
	v->a[72280] = anon_sym_LT_LT_DASH;
	v->a[72281] = anon_sym_LT_LT_LT;
	v->a[72282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72283] = anon_sym_DOLLAR_LBRACK;
	v->a[72284] = anon_sym_DOLLAR;
	v->a[72285] = sym__special_character;
	v->a[72286] = anon_sym_DQUOTE;
	v->a[72287] = sym_raw_string;
	v->a[72288] = sym_ansi_c_string;
	v->a[72289] = aux_sym_number_token1;
	v->a[72290] = aux_sym_number_token2;
	v->a[72291] = anon_sym_DOLLAR_LBRACE;
	v->a[72292] = anon_sym_DOLLAR_LPAREN;
	v->a[72293] = anon_sym_BQUOTE;
	v->a[72294] = anon_sym_DOLLAR_BQUOTE;
	v->a[72295] = anon_sym_LT_LPAREN;
	v->a[72296] = anon_sym_GT_LPAREN;
	v->a[72297] = sym_word;
	v->a[72298] = 6;
	v->a[72299] = actions(3);
	small_parse_table_3615(v);
}

/* EOF small_parse_table_722.c */
