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
	v->a[67700] = anon_sym_LT_LT_DASH;
	v->a[67701] = anon_sym_AMP;
	v->a[67702] = aux_sym_concatenation_token1;
	v->a[67703] = anon_sym_SEMI;
	v->a[67704] = 3;
	v->a[67705] = actions(3);
	v->a[67706] = 1;
	v->a[67707] = sym_comment;
	v->a[67708] = actions(1188);
	v->a[67709] = 3;
	v->a[67710] = sym_file_descriptor;
	v->a[67711] = sym__concat;
	v->a[67712] = aux_sym_heredoc_redirect_token1;
	v->a[67713] = actions(1186);
	v->a[67714] = 20;
	v->a[67715] = anon_sym_esac;
	v->a[67716] = anon_sym_PIPE;
	v->a[67717] = anon_sym_SEMI_SEMI;
	v->a[67718] = anon_sym_AMP_AMP;
	v->a[67719] = anon_sym_PIPE_PIPE;
	small_parse_table_3386(v);
}

void	small_parse_table_3386(t_small_parse_table_array *v)
{
	v->a[67720] = anon_sym_LT;
	v->a[67721] = anon_sym_GT;
	v->a[67722] = anon_sym_GT_GT;
	v->a[67723] = anon_sym_AMP_GT;
	v->a[67724] = anon_sym_AMP_GT_GT;
	v->a[67725] = anon_sym_LT_AMP;
	v->a[67726] = anon_sym_GT_AMP;
	v->a[67727] = anon_sym_GT_PIPE;
	v->a[67728] = anon_sym_LT_AMP_DASH;
	v->a[67729] = anon_sym_GT_AMP_DASH;
	v->a[67730] = anon_sym_LT_LT;
	v->a[67731] = anon_sym_LT_LT_DASH;
	v->a[67732] = anon_sym_AMP;
	v->a[67733] = aux_sym_concatenation_token1;
	v->a[67734] = anon_sym_SEMI;
	v->a[67735] = 17;
	v->a[67736] = actions(3);
	v->a[67737] = 1;
	v->a[67738] = sym_comment;
	v->a[67739] = actions(2115);
	small_parse_table_3387(v);
}

void	small_parse_table_3387(t_small_parse_table_array *v)
{
	v->a[67740] = 1;
	v->a[67741] = anon_sym_LPAREN;
	v->a[67742] = actions(2119);
	v->a[67743] = 1;
	v->a[67744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67745] = actions(2121);
	v->a[67746] = 1;
	v->a[67747] = anon_sym_DOLLAR;
	v->a[67748] = actions(2123);
	v->a[67749] = 1;
	v->a[67750] = anon_sym_DQUOTE;
	v->a[67751] = actions(2125);
	v->a[67752] = 1;
	v->a[67753] = aux_sym_number_token1;
	v->a[67754] = actions(2127);
	v->a[67755] = 1;
	v->a[67756] = aux_sym_number_token2;
	v->a[67757] = actions(2129);
	v->a[67758] = 1;
	v->a[67759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3388(v);
}

void	small_parse_table_3388(t_small_parse_table_array *v)
{
	v->a[67760] = actions(2131);
	v->a[67761] = 1;
	v->a[67762] = anon_sym_DOLLAR_LPAREN;
	v->a[67763] = actions(2133);
	v->a[67764] = 1;
	v->a[67765] = anon_sym_BQUOTE;
	v->a[67766] = actions(2135);
	v->a[67767] = 1;
	v->a[67768] = sym_extglob_pattern;
	v->a[67769] = state(1241);
	v->a[67770] = 1;
	v->a[67771] = aux_sym_case_statement_repeat1;
	v->a[67772] = state(1786);
	v->a[67773] = 1;
	v->a[67774] = sym_case_item;
	v->a[67775] = state(2259);
	v->a[67776] = 1;
	v->a[67777] = sym__case_item_last;
	v->a[67778] = actions(2111);
	v->a[67779] = 2;
	small_parse_table_3389(v);
}

void	small_parse_table_3389(t_small_parse_table_array *v)
{
	v->a[67780] = sym_raw_string;
	v->a[67781] = sym_word;
	v->a[67782] = state(2016);
	v->a[67783] = 2;
	v->a[67784] = sym_concatenation;
	v->a[67785] = sym__extglob_blob;
	v->a[67786] = state(1896);
	v->a[67787] = 6;
	v->a[67788] = sym_arithmetic_expansion;
	v->a[67789] = sym_string;
	v->a[67790] = sym_number;
	v->a[67791] = sym_simple_expansion;
	v->a[67792] = sym_expansion;
	v->a[67793] = sym_command_substitution;
	v->a[67794] = 3;
	v->a[67795] = actions(3);
	v->a[67796] = 1;
	v->a[67797] = sym_comment;
	v->a[67798] = actions(2462);
	v->a[67799] = 3;
	small_parse_table_3390(v);
}

/* EOF small_parse_table_677.c */
