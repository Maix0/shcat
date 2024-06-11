/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_947.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4735(t_small_parse_table_array *v)
{
	v->a[94700] = 1;
	v->a[94701] = anon_sym_LT_LT_DASH;
	v->a[94702] = actions(3894);
	v->a[94703] = 2;
	v->a[94704] = anon_sym_LT_AMP_DASH;
	v->a[94705] = anon_sym_GT_AMP_DASH;
	v->a[94706] = actions(3892);
	v->a[94707] = 3;
	v->a[94708] = anon_sym_GT_GT;
	v->a[94709] = anon_sym_AMP_GT_GT;
	v->a[94710] = anon_sym_GT_PIPE;
	v->a[94711] = actions(3890);
	v->a[94712] = 5;
	v->a[94713] = anon_sym_LT;
	v->a[94714] = anon_sym_GT;
	v->a[94715] = anon_sym_AMP_GT;
	v->a[94716] = anon_sym_LT_AMP;
	v->a[94717] = anon_sym_GT_AMP;
	v->a[94718] = 10;
	v->a[94719] = actions(3);
	small_parse_table_4736(v);
}

void	small_parse_table_4736(t_small_parse_table_array *v)
{
	v->a[94720] = 1;
	v->a[94721] = sym_comment;
	v->a[94722] = actions(3856);
	v->a[94723] = 1;
	v->a[94724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94725] = actions(3862);
	v->a[94726] = 1;
	v->a[94727] = sym_string_content;
	v->a[94728] = actions(3864);
	v->a[94729] = 1;
	v->a[94730] = anon_sym_DOLLAR_LBRACE;
	v->a[94731] = actions(3866);
	v->a[94732] = 1;
	v->a[94733] = anon_sym_DOLLAR_LPAREN;
	v->a[94734] = actions(3868);
	v->a[94735] = 1;
	v->a[94736] = anon_sym_BQUOTE;
	v->a[94737] = actions(3900);
	v->a[94738] = 1;
	v->a[94739] = anon_sym_DOLLAR;
	small_parse_table_4737(v);
}

void	small_parse_table_4737(t_small_parse_table_array *v)
{
	v->a[94740] = actions(3902);
	v->a[94741] = 1;
	v->a[94742] = anon_sym_DQUOTE;
	v->a[94743] = state(1987);
	v->a[94744] = 1;
	v->a[94745] = aux_sym_string_repeat1;
	v->a[94746] = state(2107);
	v->a[94747] = 4;
	v->a[94748] = sym_arithmetic_expansion;
	v->a[94749] = sym_simple_expansion;
	v->a[94750] = sym_expansion;
	v->a[94751] = sym_command_substitution;
	v->a[94752] = 4;
	v->a[94753] = actions(3);
	v->a[94754] = 1;
	v->a[94755] = sym_comment;
	v->a[94756] = actions(3906);
	v->a[94757] = 1;
	v->a[94758] = anon_sym_esac;
	v->a[94759] = actions(3908);
	small_parse_table_4738(v);
}

void	small_parse_table_4738(t_small_parse_table_array *v)
{
	v->a[94760] = 1;
	v->a[94761] = sym_extglob_pattern;
	v->a[94762] = actions(3904);
	v->a[94763] = 10;
	v->a[94764] = anon_sym_LPAREN;
	v->a[94765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94766] = anon_sym_DOLLAR;
	v->a[94767] = anon_sym_DQUOTE;
	v->a[94768] = sym_raw_string;
	v->a[94769] = sym_number;
	v->a[94770] = anon_sym_DOLLAR_LBRACE;
	v->a[94771] = anon_sym_DOLLAR_LPAREN;
	v->a[94772] = anon_sym_BQUOTE;
	v->a[94773] = sym_word;
	v->a[94774] = 10;
	v->a[94775] = actions(3);
	v->a[94776] = 1;
	v->a[94777] = sym_comment;
	v->a[94778] = actions(3856);
	v->a[94779] = 1;
	small_parse_table_4739(v);
}

void	small_parse_table_4739(t_small_parse_table_array *v)
{
	v->a[94780] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94781] = actions(3862);
	v->a[94782] = 1;
	v->a[94783] = sym_string_content;
	v->a[94784] = actions(3864);
	v->a[94785] = 1;
	v->a[94786] = anon_sym_DOLLAR_LBRACE;
	v->a[94787] = actions(3866);
	v->a[94788] = 1;
	v->a[94789] = anon_sym_DOLLAR_LPAREN;
	v->a[94790] = actions(3868);
	v->a[94791] = 1;
	v->a[94792] = anon_sym_BQUOTE;
	v->a[94793] = actions(3910);
	v->a[94794] = 1;
	v->a[94795] = anon_sym_DOLLAR;
	v->a[94796] = actions(3912);
	v->a[94797] = 1;
	v->a[94798] = anon_sym_DQUOTE;
	v->a[94799] = state(1963);
	small_parse_table_4740(v);
}

/* EOF small_parse_table_947.c */
