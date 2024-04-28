/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1253.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6265(t_small_parse_table_array *v)
{
	v->a[125300] = sym_word;
	v->a[125301] = 6;
	v->a[125302] = actions(3);
	v->a[125303] = 1;
	v->a[125304] = sym_comment;
	v->a[125305] = actions(5844);
	v->a[125306] = 1;
	v->a[125307] = aux_sym_concatenation_token1;
	v->a[125308] = actions(5846);
	v->a[125309] = 1;
	v->a[125310] = sym__concat;
	v->a[125311] = state(2385);
	v->a[125312] = 1;
	v->a[125313] = aux_sym_concatenation_repeat1;
	v->a[125314] = actions(1263);
	v->a[125315] = 4;
	v->a[125316] = sym_file_descriptor;
	v->a[125317] = sym_test_operator;
	v->a[125318] = sym__brace_start;
	v->a[125319] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6266(v);
}

void	small_parse_table_6266(t_small_parse_table_array *v)
{
	v->a[125320] = actions(1261);
	v->a[125321] = 34;
	v->a[125322] = anon_sym_LPAREN_LPAREN;
	v->a[125323] = anon_sym_PIPE_PIPE;
	v->a[125324] = anon_sym_AMP_AMP;
	v->a[125325] = anon_sym_PIPE;
	v->a[125326] = anon_sym_LT;
	v->a[125327] = anon_sym_GT;
	v->a[125328] = anon_sym_LT_LT;
	v->a[125329] = anon_sym_GT_GT;
	v->a[125330] = anon_sym_PIPE_AMP;
	v->a[125331] = anon_sym_AMP_GT;
	v->a[125332] = anon_sym_AMP_GT_GT;
	v->a[125333] = anon_sym_LT_AMP;
	v->a[125334] = anon_sym_GT_AMP;
	v->a[125335] = anon_sym_GT_PIPE;
	v->a[125336] = anon_sym_LT_AMP_DASH;
	v->a[125337] = anon_sym_GT_AMP_DASH;
	v->a[125338] = anon_sym_LT_LT_DASH;
	v->a[125339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6267(v);
}

void	small_parse_table_6267(t_small_parse_table_array *v)
{
	v->a[125340] = anon_sym_DOLLAR_LBRACK;
	v->a[125341] = anon_sym_DOLLAR;
	v->a[125342] = sym__special_character;
	v->a[125343] = anon_sym_DQUOTE;
	v->a[125344] = sym_raw_string;
	v->a[125345] = sym_ansi_c_string;
	v->a[125346] = aux_sym_number_token1;
	v->a[125347] = aux_sym_number_token2;
	v->a[125348] = anon_sym_DOLLAR_LBRACE;
	v->a[125349] = anon_sym_DOLLAR_LPAREN;
	v->a[125350] = anon_sym_BQUOTE;
	v->a[125351] = anon_sym_DOLLAR_BQUOTE;
	v->a[125352] = anon_sym_LT_LPAREN;
	v->a[125353] = anon_sym_GT_LPAREN;
	v->a[125354] = aux_sym__simple_variable_name_token1;
	v->a[125355] = sym_word;
	v->a[125356] = 6;
	v->a[125357] = actions(71);
	v->a[125358] = 1;
	v->a[125359] = sym_comment;
	small_parse_table_6268(v);
}

void	small_parse_table_6268(t_small_parse_table_array *v)
{
	v->a[125360] = actions(1369);
	v->a[125361] = 1;
	v->a[125362] = sym_test_operator;
	v->a[125363] = state(2575);
	v->a[125364] = 1;
	v->a[125365] = aux_sym_concatenation_repeat1;
	v->a[125366] = actions(1143);
	v->a[125367] = 2;
	v->a[125368] = sym__concat;
	v->a[125369] = aux_sym_concatenation_token1;
	v->a[125370] = actions(6594);
	v->a[125371] = 14;
	v->a[125372] = anon_sym_EQ;
	v->a[125373] = anon_sym_PIPE;
	v->a[125374] = anon_sym_CARET;
	v->a[125375] = anon_sym_AMP;
	v->a[125376] = anon_sym_LT;
	v->a[125377] = anon_sym_GT;
	v->a[125378] = anon_sym_LT_LT;
	v->a[125379] = anon_sym_GT_GT;
	small_parse_table_6269(v);
}

void	small_parse_table_6269(t_small_parse_table_array *v)
{
	v->a[125380] = anon_sym_PLUS;
	v->a[125381] = anon_sym_DASH;
	v->a[125382] = anon_sym_STAR;
	v->a[125383] = anon_sym_SLASH;
	v->a[125384] = anon_sym_PERCENT;
	v->a[125385] = anon_sym_STAR_STAR;
	v->a[125386] = actions(6592);
	v->a[125387] = 23;
	v->a[125388] = anon_sym_RPAREN_RPAREN;
	v->a[125389] = anon_sym_COMMA;
	v->a[125390] = anon_sym_PLUS_PLUS;
	v->a[125391] = anon_sym_DASH_DASH;
	v->a[125392] = anon_sym_PLUS_EQ;
	v->a[125393] = anon_sym_DASH_EQ;
	v->a[125394] = anon_sym_STAR_EQ;
	v->a[125395] = anon_sym_SLASH_EQ;
	v->a[125396] = anon_sym_PERCENT_EQ;
	v->a[125397] = anon_sym_STAR_STAR_EQ;
	v->a[125398] = anon_sym_LT_LT_EQ;
	v->a[125399] = anon_sym_GT_GT_EQ;
	small_parse_table_6270(v);
}

/* EOF small_parse_table_1253.c */
