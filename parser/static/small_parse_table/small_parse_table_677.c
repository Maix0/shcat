/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_677.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3385(t_small_parse_table_array *v)
{
	v->a[67700] = actions(59);
	v->a[67701] = 1;
	v->a[67702] = anon_sym_DQUOTE;
	v->a[67703] = actions(63);
	v->a[67704] = 1;
	v->a[67705] = anon_sym_DOLLAR_LBRACE;
	v->a[67706] = actions(65);
	v->a[67707] = 1;
	v->a[67708] = anon_sym_DOLLAR_LPAREN;
	v->a[67709] = actions(67);
	v->a[67710] = 1;
	v->a[67711] = anon_sym_BQUOTE;
	v->a[67712] = actions(2462);
	v->a[67713] = 1;
	v->a[67714] = sym__bare_dollar;
	v->a[67715] = actions(2636);
	v->a[67716] = 1;
	v->a[67717] = anon_sym_DOLLAR;
	v->a[67718] = actions(2458);
	v->a[67719] = 5;
	small_parse_table_3386(v);
}

void	small_parse_table_3386(t_small_parse_table_array *v)
{
	v->a[67720] = aux_sym_concatenation_token1;
	v->a[67721] = sym_raw_string;
	v->a[67722] = sym_number;
	v->a[67723] = sym__comment_word;
	v->a[67724] = sym_word;
	v->a[67725] = state(403);
	v->a[67726] = 5;
	v->a[67727] = sym_arithmetic_expansion;
	v->a[67728] = sym_string;
	v->a[67729] = sym_simple_expansion;
	v->a[67730] = sym_expansion;
	v->a[67731] = sym_command_substitution;
	v->a[67732] = 10;
	v->a[67733] = actions(3);
	v->a[67734] = 1;
	v->a[67735] = sym_comment;
	v->a[67736] = actions(2336);
	v->a[67737] = 1;
	v->a[67738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67739] = actions(2340);
	small_parse_table_3387(v);
}

void	small_parse_table_3387(t_small_parse_table_array *v)
{
	v->a[67740] = 1;
	v->a[67741] = anon_sym_DQUOTE;
	v->a[67742] = actions(2342);
	v->a[67743] = 1;
	v->a[67744] = anon_sym_DOLLAR_LBRACE;
	v->a[67745] = actions(2344);
	v->a[67746] = 1;
	v->a[67747] = anon_sym_DOLLAR_LPAREN;
	v->a[67748] = actions(2346);
	v->a[67749] = 1;
	v->a[67750] = anon_sym_BQUOTE;
	v->a[67751] = actions(2348);
	v->a[67752] = 1;
	v->a[67753] = sym__bare_dollar;
	v->a[67754] = actions(2638);
	v->a[67755] = 1;
	v->a[67756] = anon_sym_DOLLAR;
	v->a[67757] = actions(2334);
	v->a[67758] = 5;
	v->a[67759] = aux_sym_concatenation_token1;
	small_parse_table_3388(v);
}

void	small_parse_table_3388(t_small_parse_table_array *v)
{
	v->a[67760] = sym_raw_string;
	v->a[67761] = sym_number;
	v->a[67762] = sym__comment_word;
	v->a[67763] = sym_word;
	v->a[67764] = state(922);
	v->a[67765] = 5;
	v->a[67766] = sym_arithmetic_expansion;
	v->a[67767] = sym_string;
	v->a[67768] = sym_simple_expansion;
	v->a[67769] = sym_expansion;
	v->a[67770] = sym_command_substitution;
	v->a[67771] = 6;
	v->a[67772] = actions(680);
	v->a[67773] = 1;
	v->a[67774] = sym_comment;
	v->a[67775] = actions(2565);
	v->a[67776] = 1;
	v->a[67777] = aux_sym_concatenation_token1;
	v->a[67778] = actions(2640);
	v->a[67779] = 1;
	small_parse_table_3389(v);
}

void	small_parse_table_3389(t_small_parse_table_array *v)
{
	v->a[67780] = sym__concat;
	v->a[67781] = state(1311);
	v->a[67782] = 1;
	v->a[67783] = aux_sym_concatenation_repeat1;
	v->a[67784] = actions(1045);
	v->a[67785] = 4;
	v->a[67786] = anon_sym_PIPE;
	v->a[67787] = anon_sym_LT;
	v->a[67788] = anon_sym_GT;
	v->a[67789] = anon_sym_LT_LT;
	v->a[67790] = actions(1043);
	v->a[67791] = 10;
	v->a[67792] = sym_file_descriptor;
	v->a[67793] = sym_variable_name;
	v->a[67794] = anon_sym_AMP_AMP;
	v->a[67795] = anon_sym_PIPE_PIPE;
	v->a[67796] = anon_sym_GT_GT;
	v->a[67797] = anon_sym_LT_AMP;
	v->a[67798] = anon_sym_GT_AMP;
	v->a[67799] = anon_sym_GT_PIPE;
	small_parse_table_3390(v);
}

/* EOF small_parse_table_677.c */
