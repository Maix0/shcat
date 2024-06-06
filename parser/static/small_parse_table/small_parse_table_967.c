/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_967.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4835(t_small_parse_table_array *v)
{
	v->a[96700] = anon_sym_LT_AMP;
	v->a[96701] = anon_sym_GT_AMP;
	v->a[96702] = anon_sym_GT_PIPE;
	v->a[96703] = anon_sym_LT_AMP_DASH;
	v->a[96704] = anon_sym_GT_AMP_DASH;
	v->a[96705] = anon_sym_LT_LT;
	v->a[96706] = anon_sym_LT_LT_DASH;
	v->a[96707] = anon_sym_AMP;
	v->a[96708] = aux_sym_concatenation_token1;
	v->a[96709] = anon_sym_SEMI;
	v->a[96710] = 6;
	v->a[96711] = actions(3);
	v->a[96712] = 1;
	v->a[96713] = sym_comment;
	v->a[96714] = actions(5161);
	v->a[96715] = 1;
	v->a[96716] = aux_sym_concatenation_token1;
	v->a[96717] = actions(5163);
	v->a[96718] = 1;
	v->a[96719] = sym__concat;
	small_parse_table_4836(v);
}

void	small_parse_table_4836(t_small_parse_table_array *v)
{
	v->a[96720] = state(1961);
	v->a[96721] = 1;
	v->a[96722] = aux_sym_concatenation_repeat1;
	v->a[96723] = actions(2719);
	v->a[96724] = 3;
	v->a[96725] = sym_file_descriptor;
	v->a[96726] = sym_variable_name;
	v->a[96727] = aux_sym_heredoc_redirect_token1;
	v->a[96728] = actions(2717);
	v->a[96729] = 20;
	v->a[96730] = anon_sym_PIPE;
	v->a[96731] = anon_sym_SEMI_SEMI;
	v->a[96732] = anon_sym_PIPE_AMP;
	v->a[96733] = anon_sym_AMP_AMP;
	v->a[96734] = anon_sym_PIPE_PIPE;
	v->a[96735] = anon_sym_LT;
	v->a[96736] = anon_sym_GT;
	v->a[96737] = anon_sym_GT_GT;
	v->a[96738] = anon_sym_AMP_GT;
	v->a[96739] = anon_sym_AMP_GT_GT;
	small_parse_table_4837(v);
}

void	small_parse_table_4837(t_small_parse_table_array *v)
{
	v->a[96740] = anon_sym_LT_AMP;
	v->a[96741] = anon_sym_GT_AMP;
	v->a[96742] = anon_sym_GT_PIPE;
	v->a[96743] = anon_sym_LT_AMP_DASH;
	v->a[96744] = anon_sym_GT_AMP_DASH;
	v->a[96745] = anon_sym_LT_LT;
	v->a[96746] = anon_sym_LT_LT_DASH;
	v->a[96747] = anon_sym_AMP;
	v->a[96748] = anon_sym_BQUOTE;
	v->a[96749] = anon_sym_SEMI;
	v->a[96750] = 6;
	v->a[96751] = actions(3);
	v->a[96752] = 1;
	v->a[96753] = sym_comment;
	v->a[96754] = actions(4885);
	v->a[96755] = 1;
	v->a[96756] = sym_variable_name;
	v->a[96757] = actions(816);
	v->a[96758] = 2;
	v->a[96759] = sym_test_operator;
	small_parse_table_4838(v);
}

void	small_parse_table_4838(t_small_parse_table_array *v)
{
	v->a[96760] = sym__brace_start;
	v->a[96761] = actions(4883);
	v->a[96762] = 2;
	v->a[96763] = aux_sym__simple_variable_name_token1;
	v->a[96764] = aux_sym__multiline_variable_name_token1;
	v->a[96765] = actions(4881);
	v->a[96766] = 9;
	v->a[96767] = anon_sym_BANG;
	v->a[96768] = anon_sym_DASH;
	v->a[96769] = anon_sym_STAR;
	v->a[96770] = anon_sym_QMARK;
	v->a[96771] = anon_sym_DOLLAR;
	v->a[96772] = anon_sym_POUND;
	v->a[96773] = anon_sym_AT;
	v->a[96774] = anon_sym_0;
	v->a[96775] = anon_sym__;
	v->a[96776] = actions(810);
	v->a[96777] = 12;
	v->a[96778] = aux_sym_heredoc_redirect_token1;
	v->a[96779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4839(v);
}

void	small_parse_table_4839(t_small_parse_table_array *v)
{
	v->a[96780] = sym__special_character;
	v->a[96781] = anon_sym_DQUOTE;
	v->a[96782] = sym_raw_string;
	v->a[96783] = aux_sym_number_token1;
	v->a[96784] = aux_sym_number_token2;
	v->a[96785] = anon_sym_DOLLAR_LBRACE;
	v->a[96786] = anon_sym_DOLLAR_LPAREN;
	v->a[96787] = anon_sym_BQUOTE;
	v->a[96788] = anon_sym_DOLLAR_BQUOTE;
	v->a[96789] = sym_word;
	v->a[96790] = 3;
	v->a[96791] = actions(3);
	v->a[96792] = 1;
	v->a[96793] = sym_comment;
	v->a[96794] = actions(3050);
	v->a[96795] = 4;
	v->a[96796] = sym_file_descriptor;
	v->a[96797] = sym__concat;
	v->a[96798] = ts_builtin_sym_end;
	v->a[96799] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4840(v);
}

/* EOF small_parse_table_967.c */
