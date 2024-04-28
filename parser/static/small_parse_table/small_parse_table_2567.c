/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2567.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12835(t_small_parse_table_array *v)
{
	v->a[256700] = actions(3);
	v->a[256701] = 1;
	v->a[256702] = sym_comment;
	v->a[256703] = actions(11760);
	v->a[256704] = 1;
	v->a[256705] = anon_sym_BANG2;
	v->a[256706] = actions(11764);
	v->a[256707] = 1;
	v->a[256708] = anon_sym_DOLLAR_LPAREN;
	v->a[256709] = actions(11766);
	v->a[256710] = 1;
	v->a[256711] = anon_sym_BQUOTE;
	v->a[256712] = actions(11768);
	v->a[256713] = 1;
	v->a[256714] = anon_sym_DOLLAR_BQUOTE;
	v->a[256715] = actions(11770);
	v->a[256716] = 1;
	v->a[256717] = aux_sym__simple_variable_name_token1;
	v->a[256718] = actions(11772);
	v->a[256719] = 1;
	small_parse_table_12836(v);
}

void	small_parse_table_12836(t_small_parse_table_array *v)
{
	v->a[256720] = sym_variable_name;
	v->a[256721] = actions(11840);
	v->a[256722] = 1;
	v->a[256723] = anon_sym_RBRACE3;
	v->a[256724] = state(3532);
	v->a[256725] = 1;
	v->a[256726] = sym_subscript;
	v->a[256727] = state(6428);
	v->a[256728] = 1;
	v->a[256729] = aux_sym__expansion_body_repeat1;
	v->a[256730] = state(6472);
	v->a[256731] = 1;
	v->a[256732] = sym_command_substitution;
	v->a[256733] = state(7146);
	v->a[256734] = 1;
	v->a[256735] = sym__expansion_body;
	v->a[256736] = actions(11762);
	v->a[256737] = 2;
	v->a[256738] = anon_sym_POUND2;
	v->a[256739] = anon_sym_EQ2;
	small_parse_table_12837(v);
}

void	small_parse_table_12837(t_small_parse_table_array *v)
{
	v->a[256740] = actions(8050);
	v->a[256741] = 3;
	v->a[256742] = sym__external_expansion_sym_hash;
	v->a[256743] = sym__external_expansion_sym_bang;
	v->a[256744] = sym__external_expansion_sym_equal;
	v->a[256745] = actions(11754);
	v->a[256746] = 4;
	v->a[256747] = anon_sym_DASH;
	v->a[256748] = anon_sym_STAR;
	v->a[256749] = anon_sym_QMARK;
	v->a[256750] = anon_sym_AT2;
	v->a[256751] = actions(11756);
	v->a[256752] = 5;
	v->a[256753] = anon_sym_BANG;
	v->a[256754] = anon_sym_DOLLAR;
	v->a[256755] = anon_sym_POUND;
	v->a[256756] = anon_sym_0;
	v->a[256757] = anon_sym__;
	v->a[256758] = 3;
	v->a[256759] = actions(3);
	small_parse_table_12838(v);
}

void	small_parse_table_12838(t_small_parse_table_array *v)
{
	v->a[256760] = 1;
	v->a[256761] = sym_comment;
	v->a[256762] = actions(11842);
	v->a[256763] = 3;
	v->a[256764] = sym_file_descriptor;
	v->a[256765] = ts_builtin_sym_end;
	v->a[256766] = aux_sym_heredoc_redirect_token1;
	v->a[256767] = actions(11844);
	v->a[256768] = 22;
	v->a[256769] = anon_sym_SEMI;
	v->a[256770] = anon_sym_PIPE_PIPE;
	v->a[256771] = anon_sym_AMP_AMP;
	v->a[256772] = anon_sym_PIPE;
	v->a[256773] = anon_sym_AMP;
	v->a[256774] = anon_sym_LT;
	v->a[256775] = anon_sym_GT;
	v->a[256776] = anon_sym_LT_LT;
	v->a[256777] = anon_sym_GT_GT;
	v->a[256778] = anon_sym_RPAREN;
	v->a[256779] = anon_sym_SEMI_SEMI;
	small_parse_table_12839(v);
}

void	small_parse_table_12839(t_small_parse_table_array *v)
{
	v->a[256780] = anon_sym_PIPE_AMP;
	v->a[256781] = anon_sym_AMP_GT;
	v->a[256782] = anon_sym_AMP_GT_GT;
	v->a[256783] = anon_sym_LT_AMP;
	v->a[256784] = anon_sym_GT_AMP;
	v->a[256785] = anon_sym_GT_PIPE;
	v->a[256786] = anon_sym_LT_AMP_DASH;
	v->a[256787] = anon_sym_GT_AMP_DASH;
	v->a[256788] = anon_sym_LT_LT_DASH;
	v->a[256789] = anon_sym_LT_LT_LT;
	v->a[256790] = anon_sym_BQUOTE;
	v->a[256791] = 3;
	v->a[256792] = actions(3);
	v->a[256793] = 1;
	v->a[256794] = sym_comment;
	v->a[256795] = actions(1302);
	v->a[256796] = 3;
	v->a[256797] = sym_file_descriptor;
	v->a[256798] = sym__concat;
	v->a[256799] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12840(v);
}

/* EOF small_parse_table_2567.c */
