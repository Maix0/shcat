/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1692.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8460(t_small_parse_table_array *v)
{
	v->a[169200] = anon_sym_LT_LT;
	v->a[169201] = anon_sym_GT_GT;
	v->a[169202] = anon_sym_SEMI_SEMI;
	v->a[169203] = anon_sym_PIPE_AMP;
	v->a[169204] = anon_sym_AMP_GT;
	v->a[169205] = anon_sym_AMP_GT_GT;
	v->a[169206] = anon_sym_LT_AMP;
	v->a[169207] = anon_sym_GT_AMP;
	v->a[169208] = anon_sym_GT_PIPE;
	v->a[169209] = anon_sym_LT_AMP_DASH;
	v->a[169210] = anon_sym_GT_AMP_DASH;
	v->a[169211] = anon_sym_LT_LT_DASH;
	v->a[169212] = aux_sym_heredoc_redirect_token1;
	v->a[169213] = anon_sym_LT_LT_LT;
	v->a[169214] = 25;
	v->a[169215] = actions(71);
	v->a[169216] = 1;
	v->a[169217] = sym_comment;
	v->a[169218] = actions(6474);
	v->a[169219] = 1;
	small_parse_table_8461(v);
}

void	small_parse_table_8461(t_small_parse_table_array *v)
{
	v->a[169220] = sym_word;
	v->a[169221] = actions(6480);
	v->a[169222] = 1;
	v->a[169223] = anon_sym_LPAREN;
	v->a[169224] = actions(6488);
	v->a[169225] = 1;
	v->a[169226] = anon_sym_DOLLAR;
	v->a[169227] = actions(6494);
	v->a[169228] = 1;
	v->a[169229] = aux_sym_number_token1;
	v->a[169230] = actions(6496);
	v->a[169231] = 1;
	v->a[169232] = aux_sym_number_token2;
	v->a[169233] = actions(6500);
	v->a[169234] = 1;
	v->a[169235] = anon_sym_DOLLAR_LPAREN;
	v->a[169236] = actions(6508);
	v->a[169237] = 1;
	v->a[169238] = sym_test_operator;
	v->a[169239] = actions(6510);
	small_parse_table_8462(v);
}

void	small_parse_table_8462(t_small_parse_table_array *v)
{
	v->a[169240] = 1;
	v->a[169241] = sym_extglob_pattern;
	v->a[169242] = actions(6512);
	v->a[169243] = 1;
	v->a[169244] = sym__brace_start;
	v->a[169245] = actions(7226);
	v->a[169246] = 1;
	v->a[169247] = anon_sym_DOLLAR_LBRACK;
	v->a[169248] = actions(7228);
	v->a[169249] = 1;
	v->a[169250] = sym__special_character;
	v->a[169251] = actions(7230);
	v->a[169252] = 1;
	v->a[169253] = anon_sym_DQUOTE;
	v->a[169254] = actions(7234);
	v->a[169255] = 1;
	v->a[169256] = anon_sym_DOLLAR_LBRACE;
	v->a[169257] = actions(7236);
	v->a[169258] = 1;
	v->a[169259] = anon_sym_BQUOTE;
	small_parse_table_8463(v);
}

void	small_parse_table_8463(t_small_parse_table_array *v)
{
	v->a[169260] = actions(7238);
	v->a[169261] = 1;
	v->a[169262] = anon_sym_DOLLAR_BQUOTE;
	v->a[169263] = actions(7565);
	v->a[169264] = 1;
	v->a[169265] = anon_sym_esac;
	v->a[169266] = state(6426);
	v->a[169267] = 1;
	v->a[169268] = aux_sym__literal_repeat1;
	v->a[169269] = state(6923);
	v->a[169270] = 1;
	v->a[169271] = sym_last_case_item;
	v->a[169272] = actions(7224);
	v->a[169273] = 2;
	v->a[169274] = anon_sym_LPAREN_LPAREN;
	v->a[169275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[169276] = actions(7232);
	v->a[169277] = 2;
	v->a[169278] = sym_raw_string;
	v->a[169279] = sym_ansi_c_string;
	small_parse_table_8464(v);
}

void	small_parse_table_8464(t_small_parse_table_array *v)
{
	v->a[169280] = actions(7240);
	v->a[169281] = 2;
	v->a[169282] = anon_sym_LT_LPAREN;
	v->a[169283] = anon_sym_GT_LPAREN;
	v->a[169284] = state(3424);
	v->a[169285] = 2;
	v->a[169286] = sym_case_item;
	v->a[169287] = aux_sym_case_statement_repeat1;
	v->a[169288] = state(6695);
	v->a[169289] = 2;
	v->a[169290] = sym_concatenation;
	v->a[169291] = sym__extglob_blob;
	v->a[169292] = state(6303);
	v->a[169293] = 9;
	v->a[169294] = sym_arithmetic_expansion;
	v->a[169295] = sym_brace_expression;
	v->a[169296] = sym_string;
	v->a[169297] = sym_translated_string;
	v->a[169298] = sym_number;
	v->a[169299] = sym_simple_expansion;
	small_parse_table_8465(v);
}

/* EOF small_parse_table_1692.c */
