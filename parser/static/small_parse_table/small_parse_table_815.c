/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_815.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4075(t_small_parse_table_array *v)
{
	v->a[81500] = sym_string;
	v->a[81501] = sym_simple_expansion;
	v->a[81502] = sym_expansion;
	v->a[81503] = sym_command_substitution;
	v->a[81504] = 8;
	v->a[81505] = actions(3);
	v->a[81506] = 1;
	v->a[81507] = sym_comment;
	v->a[81508] = actions(2182);
	v->a[81509] = 1;
	v->a[81510] = aux_sym_heredoc_redirect_token1;
	v->a[81511] = actions(2964);
	v->a[81512] = 1;
	v->a[81513] = sym_file_descriptor;
	v->a[81514] = actions(861);
	v->a[81515] = 2;
	v->a[81516] = anon_sym_LT_LT;
	v->a[81517] = anon_sym_LT_LT_DASH;
	v->a[81518] = actions(2962);
	v->a[81519] = 2;
	small_parse_table_4076(v);
}

void	small_parse_table_4076(t_small_parse_table_array *v)
{
	v->a[81520] = anon_sym_LT_AMP_DASH;
	v->a[81521] = anon_sym_GT_AMP_DASH;
	v->a[81522] = actions(2176);
	v->a[81523] = 3;
	v->a[81524] = anon_sym_PIPE;
	v->a[81525] = anon_sym_AMP_AMP;
	v->a[81526] = anon_sym_PIPE_PIPE;
	v->a[81527] = state(1556);
	v->a[81528] = 3;
	v->a[81529] = sym_file_redirect;
	v->a[81530] = sym_heredoc_redirect;
	v->a[81531] = aux_sym_redirected_statement_repeat1;
	v->a[81532] = actions(2960);
	v->a[81533] = 8;
	v->a[81534] = anon_sym_LT;
	v->a[81535] = anon_sym_GT;
	v->a[81536] = anon_sym_GT_GT;
	v->a[81537] = anon_sym_AMP_GT;
	v->a[81538] = anon_sym_AMP_GT_GT;
	v->a[81539] = anon_sym_LT_AMP;
	small_parse_table_4077(v);
}

void	small_parse_table_4077(t_small_parse_table_array *v)
{
	v->a[81540] = anon_sym_GT_AMP;
	v->a[81541] = anon_sym_GT_PIPE;
	v->a[81542] = 14;
	v->a[81543] = actions(3);
	v->a[81544] = 1;
	v->a[81545] = sym_comment;
	v->a[81546] = actions(2969);
	v->a[81547] = 1;
	v->a[81548] = anon_sym_LPAREN;
	v->a[81549] = actions(2972);
	v->a[81550] = 1;
	v->a[81551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81552] = actions(2975);
	v->a[81553] = 1;
	v->a[81554] = anon_sym_DOLLAR;
	v->a[81555] = actions(2978);
	v->a[81556] = 1;
	v->a[81557] = anon_sym_DQUOTE;
	v->a[81558] = actions(2981);
	v->a[81559] = 1;
	small_parse_table_4078(v);
}

void	small_parse_table_4078(t_small_parse_table_array *v)
{
	v->a[81560] = anon_sym_DOLLAR_LBRACE;
	v->a[81561] = actions(2984);
	v->a[81562] = 1;
	v->a[81563] = anon_sym_DOLLAR_LPAREN;
	v->a[81564] = actions(2987);
	v->a[81565] = 1;
	v->a[81566] = anon_sym_BQUOTE;
	v->a[81567] = actions(2990);
	v->a[81568] = 1;
	v->a[81569] = sym_extglob_pattern;
	v->a[81570] = state(1547);
	v->a[81571] = 1;
	v->a[81572] = aux_sym_case_statement_repeat1;
	v->a[81573] = state(2080);
	v->a[81574] = 1;
	v->a[81575] = sym_case_item;
	v->a[81576] = state(2221);
	v->a[81577] = 2;
	v->a[81578] = sym_concatenation;
	v->a[81579] = sym__extglob_blob;
	small_parse_table_4079(v);
}

void	small_parse_table_4079(t_small_parse_table_array *v)
{
	v->a[81580] = actions(2966);
	v->a[81581] = 3;
	v->a[81582] = sym_raw_string;
	v->a[81583] = sym_number;
	v->a[81584] = sym_word;
	v->a[81585] = state(2149);
	v->a[81586] = 5;
	v->a[81587] = sym_arithmetic_expansion;
	v->a[81588] = sym_string;
	v->a[81589] = sym_simple_expansion;
	v->a[81590] = sym_expansion;
	v->a[81591] = sym_command_substitution;
	v->a[81592] = 6;
	v->a[81593] = actions(1094);
	v->a[81594] = 1;
	v->a[81595] = sym_comment;
	v->a[81596] = actions(2935);
	v->a[81597] = 1;
	v->a[81598] = aux_sym_concatenation_token1;
	v->a[81599] = actions(2993);
	small_parse_table_4080(v);
}

/* EOF small_parse_table_815.c */
