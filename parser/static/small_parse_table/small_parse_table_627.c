/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_627.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3135(t_small_parse_table_array *v)
{
	v->a[62700] = actions(4065);
	v->a[62701] = 2;
	v->a[62702] = aux_sym__simple_variable_name_token1;
	v->a[62703] = aux_sym__multiline_variable_name_token1;
	v->a[62704] = actions(4063);
	v->a[62705] = 9;
	v->a[62706] = anon_sym_BANG;
	v->a[62707] = anon_sym_DASH;
	v->a[62708] = anon_sym_STAR;
	v->a[62709] = anon_sym_QMARK;
	v->a[62710] = anon_sym_DOLLAR;
	v->a[62711] = anon_sym_POUND;
	v->a[62712] = anon_sym_AT;
	v->a[62713] = anon_sym_0;
	v->a[62714] = anon_sym__;
	v->a[62715] = actions(826);
	v->a[62716] = 23;
	v->a[62717] = anon_sym_esac;
	v->a[62718] = anon_sym_PIPE;
	v->a[62719] = anon_sym_SEMI_SEMI;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = anon_sym_SEMI_AMP;
	v->a[62721] = anon_sym_SEMI_SEMI_AMP;
	v->a[62722] = anon_sym_PIPE_AMP;
	v->a[62723] = anon_sym_AMP_AMP;
	v->a[62724] = anon_sym_PIPE_PIPE;
	v->a[62725] = anon_sym_LT;
	v->a[62726] = anon_sym_GT;
	v->a[62727] = anon_sym_GT_GT;
	v->a[62728] = anon_sym_AMP_GT;
	v->a[62729] = anon_sym_AMP_GT_GT;
	v->a[62730] = anon_sym_LT_AMP;
	v->a[62731] = anon_sym_GT_AMP;
	v->a[62732] = anon_sym_GT_PIPE;
	v->a[62733] = anon_sym_LT_AMP_DASH;
	v->a[62734] = anon_sym_GT_AMP_DASH;
	v->a[62735] = anon_sym_LT_LT;
	v->a[62736] = anon_sym_LT_LT_DASH;
	v->a[62737] = aux_sym_heredoc_redirect_token1;
	v->a[62738] = anon_sym_AMP;
	v->a[62739] = anon_sym_SEMI;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = 5;
	v->a[62741] = actions(57);
	v->a[62742] = 1;
	v->a[62743] = sym_comment;
	v->a[62744] = state(1370);
	v->a[62745] = 1;
	v->a[62746] = aux_sym_concatenation_repeat1;
	v->a[62747] = actions(4056);
	v->a[62748] = 2;
	v->a[62749] = sym__concat;
	v->a[62750] = aux_sym_concatenation_token1;
	v->a[62751] = actions(2756);
	v->a[62752] = 14;
	v->a[62753] = anon_sym_PIPE;
	v->a[62754] = anon_sym_LT;
	v->a[62755] = anon_sym_GT;
	v->a[62756] = anon_sym_AMP_GT;
	v->a[62757] = anon_sym_LT_AMP;
	v->a[62758] = anon_sym_GT_AMP;
	v->a[62759] = anon_sym_LT_LT;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = anon_sym_DOLLAR;
	v->a[62761] = aux_sym_number_token1;
	v->a[62762] = aux_sym_number_token2;
	v->a[62763] = anon_sym_DOLLAR_LPAREN;
	v->a[62764] = anon_sym_BQUOTE;
	v->a[62765] = aux_sym__simple_variable_name_token1;
	v->a[62766] = sym_word;
	v->a[62767] = actions(2758);
	v->a[62768] = 19;
	v->a[62769] = sym_file_descriptor;
	v->a[62770] = sym_variable_name;
	v->a[62771] = sym_test_operator;
	v->a[62772] = sym__brace_start;
	v->a[62773] = anon_sym_PIPE_AMP;
	v->a[62774] = anon_sym_AMP_AMP;
	v->a[62775] = anon_sym_PIPE_PIPE;
	v->a[62776] = anon_sym_GT_GT;
	v->a[62777] = anon_sym_AMP_GT_GT;
	v->a[62778] = anon_sym_GT_PIPE;
	v->a[62779] = anon_sym_LT_AMP_DASH;
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = anon_sym_GT_AMP_DASH;
	v->a[62781] = anon_sym_LT_LT_DASH;
	v->a[62782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62783] = sym__special_character;
	v->a[62784] = anon_sym_DQUOTE;
	v->a[62785] = sym_raw_string;
	v->a[62786] = anon_sym_DOLLAR_LBRACE;
	v->a[62787] = anon_sym_DOLLAR_BQUOTE;
	v->a[62788] = 6;
	v->a[62789] = actions(3);
	v->a[62790] = 1;
	v->a[62791] = sym_comment;
	v->a[62792] = actions(3442);
	v->a[62793] = 1;
	v->a[62794] = aux_sym_concatenation_token1;
	v->a[62795] = actions(3572);
	v->a[62796] = 1;
	v->a[62797] = sym__concat;
	v->a[62798] = state(1365);
	v->a[62799] = 1;
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
