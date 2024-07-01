/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_427.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2135(t_small_parse_table_array *v)
{
	v->a[42700] = sym_word;
	v->a[42701] = actions(1424);
	v->a[42702] = 9;
	v->a[42703] = anon_sym_PIPE;
	v->a[42704] = anon_sym_SEMI_SEMI;
	v->a[42705] = anon_sym_AMP_AMP;
	v->a[42706] = anon_sym_PIPE_PIPE;
	v->a[42707] = anon_sym_LT_LT;
	v->a[42708] = anon_sym_LT_LT_DASH;
	v->a[42709] = aux_sym_heredoc_redirect_token1;
	v->a[42710] = anon_sym_AMP;
	v->a[42711] = anon_sym_SEMI;
	v->a[42712] = 7;
	v->a[42713] = actions(3);
	v->a[42714] = 1;
	v->a[42715] = sym_comment;
	v->a[42716] = actions(1432);
	v->a[42717] = 1;
	v->a[42718] = sym_file_descriptor;
	v->a[42719] = actions(1435);
	small_parse_table_2136(v);
}

void	small_parse_table_2136(t_small_parse_table_array *v)
{
	v->a[42720] = 1;
	v->a[42721] = sym_variable_name;
	v->a[42722] = actions(1510);
	v->a[42723] = 1;
	v->a[42724] = anon_sym_RPAREN;
	v->a[42725] = actions(1429);
	v->a[42726] = 7;
	v->a[42727] = anon_sym_LT;
	v->a[42728] = anon_sym_GT;
	v->a[42729] = anon_sym_GT_GT;
	v->a[42730] = anon_sym_LT_AMP;
	v->a[42731] = anon_sym_GT_AMP;
	v->a[42732] = anon_sym_GT_PIPE;
	v->a[42733] = anon_sym_LT_GT;
	v->a[42734] = actions(1422);
	v->a[42735] = 9;
	v->a[42736] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42737] = anon_sym_DOLLAR;
	v->a[42738] = anon_sym_DQUOTE;
	v->a[42739] = sym_raw_string;
	small_parse_table_2137(v);
}

void	small_parse_table_2137(t_small_parse_table_array *v)
{
	v->a[42740] = sym_number;
	v->a[42741] = anon_sym_DOLLAR_LBRACE;
	v->a[42742] = anon_sym_DOLLAR_LPAREN;
	v->a[42743] = anon_sym_BQUOTE;
	v->a[42744] = sym_word;
	v->a[42745] = actions(1424);
	v->a[42746] = 9;
	v->a[42747] = anon_sym_PIPE;
	v->a[42748] = anon_sym_SEMI_SEMI;
	v->a[42749] = anon_sym_AMP_AMP;
	v->a[42750] = anon_sym_PIPE_PIPE;
	v->a[42751] = anon_sym_LT_LT;
	v->a[42752] = anon_sym_LT_LT_DASH;
	v->a[42753] = aux_sym_heredoc_redirect_token1;
	v->a[42754] = anon_sym_AMP;
	v->a[42755] = anon_sym_SEMI;
	v->a[42756] = 16;
	v->a[42757] = actions(3);
	v->a[42758] = 1;
	v->a[42759] = sym_comment;
	small_parse_table_2138(v);
}

void	small_parse_table_2138(t_small_parse_table_array *v)
{
	v->a[42760] = actions(55);
	v->a[42761] = 1;
	v->a[42762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42763] = actions(57);
	v->a[42764] = 1;
	v->a[42765] = anon_sym_DOLLAR;
	v->a[42766] = actions(59);
	v->a[42767] = 1;
	v->a[42768] = anon_sym_DQUOTE;
	v->a[42769] = actions(63);
	v->a[42770] = 1;
	v->a[42771] = anon_sym_DOLLAR_LBRACE;
	v->a[42772] = actions(65);
	v->a[42773] = 1;
	v->a[42774] = anon_sym_DOLLAR_LPAREN;
	v->a[42775] = actions(67);
	v->a[42776] = 1;
	v->a[42777] = anon_sym_BQUOTE;
	v->a[42778] = actions(359);
	v->a[42779] = 1;
	small_parse_table_2139(v);
}

void	small_parse_table_2139(t_small_parse_table_array *v)
{
	v->a[42780] = sym_variable_name;
	v->a[42781] = actions(1152);
	v->a[42782] = 1;
	v->a[42783] = sym_file_descriptor;
	v->a[42784] = state(175);
	v->a[42785] = 1;
	v->a[42786] = sym_command_name;
	v->a[42787] = state(603);
	v->a[42788] = 1;
	v->a[42789] = sym_concatenation;
	v->a[42790] = state(1225);
	v->a[42791] = 1;
	v->a[42792] = sym_file_redirect;
	v->a[42793] = state(1024);
	v->a[42794] = 2;
	v->a[42795] = sym_variable_assignment;
	v->a[42796] = aux_sym_command_repeat1;
	v->a[42797] = actions(217);
	v->a[42798] = 3;
	v->a[42799] = sym_raw_string;
	small_parse_table_2140(v);
}

/* EOF small_parse_table_427.c */
