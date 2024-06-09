/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_767.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3835(t_small_parse_table_array *v)
{
	v->a[76700] = anon_sym_DQUOTE;
	v->a[76701] = actions(2911);
	v->a[76702] = 1;
	v->a[76703] = aux_sym_number_token1;
	v->a[76704] = actions(2913);
	v->a[76705] = 1;
	v->a[76706] = aux_sym_number_token2;
	v->a[76707] = actions(2915);
	v->a[76708] = 1;
	v->a[76709] = anon_sym_DOLLAR_LBRACE;
	v->a[76710] = actions(2917);
	v->a[76711] = 1;
	v->a[76712] = anon_sym_DOLLAR_LPAREN;
	v->a[76713] = actions(2919);
	v->a[76714] = 1;
	v->a[76715] = anon_sym_BQUOTE;
	v->a[76716] = actions(3109);
	v->a[76717] = 2;
	v->a[76718] = sym_raw_string;
	v->a[76719] = sym_word;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = state(279);
	v->a[76721] = 2;
	v->a[76722] = sym_concatenation;
	v->a[76723] = aux_sym_for_statement_repeat1;
	v->a[76724] = state(771);
	v->a[76725] = 6;
	v->a[76726] = sym_arithmetic_expansion;
	v->a[76727] = sym_string;
	v->a[76728] = sym_number;
	v->a[76729] = sym_simple_expansion;
	v->a[76730] = sym_expansion;
	v->a[76731] = sym_command_substitution;
	v->a[76732] = 12;
	v->a[76733] = actions(3);
	v->a[76734] = 1;
	v->a[76735] = sym_comment;
	v->a[76736] = actions(2905);
	v->a[76737] = 1;
	v->a[76738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76739] = actions(2907);
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = 1;
	v->a[76741] = anon_sym_DOLLAR;
	v->a[76742] = actions(2909);
	v->a[76743] = 1;
	v->a[76744] = anon_sym_DQUOTE;
	v->a[76745] = actions(2911);
	v->a[76746] = 1;
	v->a[76747] = aux_sym_number_token1;
	v->a[76748] = actions(2913);
	v->a[76749] = 1;
	v->a[76750] = aux_sym_number_token2;
	v->a[76751] = actions(2915);
	v->a[76752] = 1;
	v->a[76753] = anon_sym_DOLLAR_LBRACE;
	v->a[76754] = actions(2917);
	v->a[76755] = 1;
	v->a[76756] = anon_sym_DOLLAR_LPAREN;
	v->a[76757] = actions(2919);
	v->a[76758] = 1;
	v->a[76759] = anon_sym_BQUOTE;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = actions(3109);
	v->a[76761] = 2;
	v->a[76762] = sym_raw_string;
	v->a[76763] = sym_word;
	v->a[76764] = state(308);
	v->a[76765] = 2;
	v->a[76766] = sym_concatenation;
	v->a[76767] = aux_sym_for_statement_repeat1;
	v->a[76768] = state(771);
	v->a[76769] = 6;
	v->a[76770] = sym_arithmetic_expansion;
	v->a[76771] = sym_string;
	v->a[76772] = sym_number;
	v->a[76773] = sym_simple_expansion;
	v->a[76774] = sym_expansion;
	v->a[76775] = sym_command_substitution;
	v->a[76776] = 5;
	v->a[76777] = actions(3);
	v->a[76778] = 1;
	v->a[76779] = sym_comment;
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = actions(3111);
	v->a[76781] = 1;
	v->a[76782] = anon_sym_PIPE;
	v->a[76783] = state(1382);
	v->a[76784] = 1;
	v->a[76785] = aux_sym_pipeline_repeat1;
	v->a[76786] = actions(2247);
	v->a[76787] = 2;
	v->a[76788] = sym_file_descriptor;
	v->a[76789] = aux_sym_heredoc_redirect_token1;
	v->a[76790] = actions(2252);
	v->a[76791] = 14;
	v->a[76792] = anon_sym_AMP_AMP;
	v->a[76793] = anon_sym_PIPE_PIPE;
	v->a[76794] = anon_sym_LT;
	v->a[76795] = anon_sym_GT;
	v->a[76796] = anon_sym_GT_GT;
	v->a[76797] = anon_sym_AMP_GT;
	v->a[76798] = anon_sym_AMP_GT_GT;
	v->a[76799] = anon_sym_LT_AMP;
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
