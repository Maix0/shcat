/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = sym_raw_string;
	v->a[59701] = aux_sym_number_token1;
	v->a[59702] = aux_sym_number_token2;
	v->a[59703] = anon_sym_DOLLAR_LBRACE;
	v->a[59704] = anon_sym_DOLLAR_LPAREN;
	v->a[59705] = anon_sym_BQUOTE;
	v->a[59706] = anon_sym_DOLLAR_BQUOTE;
	v->a[59707] = sym_word;
	v->a[59708] = 5;
	v->a[59709] = actions(3);
	v->a[59710] = 1;
	v->a[59711] = sym_comment;
	v->a[59712] = actions(3641);
	v->a[59713] = 2;
	v->a[59714] = sym_file_descriptor;
	v->a[59715] = aux_sym_heredoc_redirect_token1;
	v->a[59716] = actions(2526);
	v->a[59717] = 3;
	v->a[59718] = sym_variable_name;
	v->a[59719] = sym_test_operator;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = sym__brace_start;
	v->a[59721] = actions(2512);
	v->a[59722] = 12;
	v->a[59723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59724] = anon_sym_DOLLAR;
	v->a[59725] = sym__special_character;
	v->a[59726] = anon_sym_DQUOTE;
	v->a[59727] = sym_raw_string;
	v->a[59728] = aux_sym_number_token1;
	v->a[59729] = aux_sym_number_token2;
	v->a[59730] = anon_sym_DOLLAR_LBRACE;
	v->a[59731] = anon_sym_DOLLAR_LPAREN;
	v->a[59732] = anon_sym_BQUOTE;
	v->a[59733] = anon_sym_DOLLAR_BQUOTE;
	v->a[59734] = sym_word;
	v->a[59735] = actions(3639);
	v->a[59736] = 20;
	v->a[59737] = anon_sym_PIPE;
	v->a[59738] = anon_sym_RPAREN;
	v->a[59739] = anon_sym_SEMI_SEMI;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = anon_sym_PIPE_AMP;
	v->a[59741] = anon_sym_AMP_AMP;
	v->a[59742] = anon_sym_PIPE_PIPE;
	v->a[59743] = anon_sym_LT;
	v->a[59744] = anon_sym_GT;
	v->a[59745] = anon_sym_GT_GT;
	v->a[59746] = anon_sym_AMP_GT;
	v->a[59747] = anon_sym_AMP_GT_GT;
	v->a[59748] = anon_sym_LT_AMP;
	v->a[59749] = anon_sym_GT_AMP;
	v->a[59750] = anon_sym_GT_PIPE;
	v->a[59751] = anon_sym_LT_AMP_DASH;
	v->a[59752] = anon_sym_GT_AMP_DASH;
	v->a[59753] = anon_sym_LT_LT;
	v->a[59754] = anon_sym_LT_LT_DASH;
	v->a[59755] = anon_sym_AMP;
	v->a[59756] = anon_sym_SEMI;
	v->a[59757] = 8;
	v->a[59758] = actions(3);
	v->a[59759] = 1;
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = sym_comment;
	v->a[59761] = actions(3632);
	v->a[59762] = 1;
	v->a[59763] = aux_sym_heredoc_redirect_token1;
	v->a[59764] = actions(3634);
	v->a[59765] = 1;
	v->a[59766] = sym_file_descriptor;
	v->a[59767] = actions(3948);
	v->a[59768] = 1;
	v->a[59769] = anon_sym_RPAREN;
	v->a[59770] = actions(3637);
	v->a[59771] = 3;
	v->a[59772] = sym_variable_name;
	v->a[59773] = sym_test_operator;
	v->a[59774] = sym__brace_start;
	v->a[59775] = actions(3627);
	v->a[59776] = 9;
	v->a[59777] = anon_sym_PIPE;
	v->a[59778] = anon_sym_SEMI_SEMI;
	v->a[59779] = anon_sym_PIPE_AMP;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = anon_sym_AMP_AMP;
	v->a[59781] = anon_sym_PIPE_PIPE;
	v->a[59782] = anon_sym_LT_LT;
	v->a[59783] = anon_sym_LT_LT_DASH;
	v->a[59784] = anon_sym_AMP;
	v->a[59785] = anon_sym_SEMI;
	v->a[59786] = actions(3629);
	v->a[59787] = 10;
	v->a[59788] = anon_sym_LT;
	v->a[59789] = anon_sym_GT;
	v->a[59790] = anon_sym_GT_GT;
	v->a[59791] = anon_sym_AMP_GT;
	v->a[59792] = anon_sym_AMP_GT_GT;
	v->a[59793] = anon_sym_LT_AMP;
	v->a[59794] = anon_sym_GT_AMP;
	v->a[59795] = anon_sym_GT_PIPE;
	v->a[59796] = anon_sym_LT_AMP_DASH;
	v->a[59797] = anon_sym_GT_AMP_DASH;
	v->a[59798] = actions(3625);
	v->a[59799] = 12;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
