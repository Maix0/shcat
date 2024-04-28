/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_147.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_735(t_small_parse_table_array *v)
{
	v->a[14700] = actions(3);
	v->a[14701] = 1;
	v->a[14702] = sym_comment;
	v->a[14703] = actions(3213);
	v->a[14704] = 1;
	v->a[14705] = anon_sym_DQUOTE;
	v->a[14706] = actions(3217);
	v->a[14707] = 1;
	v->a[14708] = sym_variable_name;
	v->a[14709] = state(1919);
	v->a[14710] = 1;
	v->a[14711] = sym_string;
	v->a[14712] = actions(3215);
	v->a[14713] = 2;
	v->a[14714] = aux_sym__simple_variable_name_token1;
	v->a[14715] = aux_sym__multiline_variable_name_token1;
	v->a[14716] = actions(1235);
	v->a[14717] = 4;
	v->a[14718] = sym_file_descriptor;
	v->a[14719] = sym_test_operator;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = sym__brace_start;
	v->a[14721] = ts_builtin_sym_end;
	v->a[14722] = actions(3211);
	v->a[14723] = 9;
	v->a[14724] = anon_sym_DASH;
	v->a[14725] = anon_sym_STAR;
	v->a[14726] = anon_sym_BANG;
	v->a[14727] = anon_sym_QMARK;
	v->a[14728] = anon_sym_DOLLAR;
	v->a[14729] = anon_sym_POUND;
	v->a[14730] = anon_sym_AT2;
	v->a[14731] = anon_sym_0;
	v->a[14732] = anon_sym__;
	v->a[14733] = actions(1227);
	v->a[14734] = 36;
	v->a[14735] = anon_sym_LPAREN_LPAREN;
	v->a[14736] = anon_sym_SEMI;
	v->a[14737] = anon_sym_PIPE_PIPE;
	v->a[14738] = anon_sym_AMP_AMP;
	v->a[14739] = anon_sym_PIPE;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = anon_sym_AMP;
	v->a[14741] = anon_sym_LT;
	v->a[14742] = anon_sym_GT;
	v->a[14743] = anon_sym_LT_LT;
	v->a[14744] = anon_sym_GT_GT;
	v->a[14745] = anon_sym_SEMI_SEMI;
	v->a[14746] = anon_sym_PIPE_AMP;
	v->a[14747] = anon_sym_AMP_GT;
	v->a[14748] = anon_sym_AMP_GT_GT;
	v->a[14749] = anon_sym_LT_AMP;
	v->a[14750] = anon_sym_GT_AMP;
	v->a[14751] = anon_sym_GT_PIPE;
	v->a[14752] = anon_sym_LT_AMP_DASH;
	v->a[14753] = anon_sym_GT_AMP_DASH;
	v->a[14754] = anon_sym_LT_LT_DASH;
	v->a[14755] = aux_sym_heredoc_redirect_token1;
	v->a[14756] = anon_sym_LT_LT_LT;
	v->a[14757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14758] = anon_sym_DOLLAR_LBRACK;
	v->a[14759] = sym__special_character;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = sym_raw_string;
	v->a[14761] = sym_ansi_c_string;
	v->a[14762] = aux_sym_number_token1;
	v->a[14763] = aux_sym_number_token2;
	v->a[14764] = anon_sym_DOLLAR_LBRACE;
	v->a[14765] = anon_sym_DOLLAR_LPAREN;
	v->a[14766] = anon_sym_BQUOTE;
	v->a[14767] = anon_sym_DOLLAR_BQUOTE;
	v->a[14768] = anon_sym_LT_LPAREN;
	v->a[14769] = anon_sym_GT_LPAREN;
	v->a[14770] = sym_word;
	v->a[14771] = 21;
	v->a[14772] = actions(3);
	v->a[14773] = 1;
	v->a[14774] = sym_comment;
	v->a[14775] = actions(3115);
	v->a[14776] = 1;
	v->a[14777] = anon_sym_DQUOTE;
	v->a[14778] = actions(3395);
	v->a[14779] = 1;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = anon_sym_DOLLAR_LBRACK;
	v->a[14781] = actions(3397);
	v->a[14782] = 1;
	v->a[14783] = anon_sym_DOLLAR;
	v->a[14784] = actions(3399);
	v->a[14785] = 1;
	v->a[14786] = sym__special_character;
	v->a[14787] = actions(3401);
	v->a[14788] = 1;
	v->a[14789] = aux_sym_number_token1;
	v->a[14790] = actions(3403);
	v->a[14791] = 1;
	v->a[14792] = aux_sym_number_token2;
	v->a[14793] = actions(3405);
	v->a[14794] = 1;
	v->a[14795] = anon_sym_DOLLAR_LBRACE;
	v->a[14796] = actions(3407);
	v->a[14797] = 1;
	v->a[14798] = anon_sym_DOLLAR_LPAREN;
	v->a[14799] = actions(3409);
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
