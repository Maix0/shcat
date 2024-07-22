/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_637.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3185(t_small_parse_table_array *v)
{
	v->a[63700] = sym_expansion;
	v->a[63701] = sym_command_substitution;
	v->a[63702] = 10;
	v->a[63703] = actions(3);
	v->a[63704] = 1;
	v->a[63705] = sym_comment;
	v->a[63706] = actions(2349);
	v->a[63707] = 1;
	v->a[63708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63709] = actions(2351);
	v->a[63710] = 1;
	v->a[63711] = anon_sym_DOLLAR;
	v->a[63712] = actions(2353);
	v->a[63713] = 1;
	v->a[63714] = anon_sym_DQUOTE;
	v->a[63715] = actions(2355);
	v->a[63716] = 1;
	v->a[63717] = anon_sym_DOLLAR_LBRACE;
	v->a[63718] = actions(2357);
	v->a[63719] = 1;
	small_parse_table_3186(v);
}

void	small_parse_table_3186(t_small_parse_table_array *v)
{
	v->a[63720] = anon_sym_DOLLAR_LPAREN;
	v->a[63721] = actions(2359);
	v->a[63722] = 1;
	v->a[63723] = anon_sym_BQUOTE;
	v->a[63724] = actions(2361);
	v->a[63725] = 1;
	v->a[63726] = sym__bare_dollar;
	v->a[63727] = actions(2347);
	v->a[63728] = 5;
	v->a[63729] = aux_sym_concatenation_token1;
	v->a[63730] = sym_raw_string;
	v->a[63731] = sym_number;
	v->a[63732] = sym__comment_word;
	v->a[63733] = sym_word;
	v->a[63734] = state(521);
	v->a[63735] = 5;
	v->a[63736] = sym_arithmetic_expansion;
	v->a[63737] = sym_string;
	v->a[63738] = sym_simple_expansion;
	v->a[63739] = sym_expansion;
	small_parse_table_3187(v);
}

void	small_parse_table_3187(t_small_parse_table_array *v)
{
	v->a[63740] = sym_command_substitution;
	v->a[63741] = 3;
	v->a[63742] = actions(3);
	v->a[63743] = 1;
	v->a[63744] = sym_comment;
	v->a[63745] = actions(2291);
	v->a[63746] = 2;
	v->a[63747] = sym_file_descriptor;
	v->a[63748] = aux_sym_heredoc_redirect_token1;
	v->a[63749] = actions(2293);
	v->a[63750] = 15;
	v->a[63751] = anon_sym_esac;
	v->a[63752] = anon_sym_PIPE;
	v->a[63753] = anon_sym_SEMI_SEMI;
	v->a[63754] = anon_sym_AMP_AMP;
	v->a[63755] = anon_sym_PIPE_PIPE;
	v->a[63756] = anon_sym_LT;
	v->a[63757] = anon_sym_GT;
	v->a[63758] = anon_sym_GT_GT;
	v->a[63759] = anon_sym_LT_AMP;
	small_parse_table_3188(v);
}

void	small_parse_table_3188(t_small_parse_table_array *v)
{
	v->a[63760] = anon_sym_GT_AMP;
	v->a[63761] = anon_sym_GT_PIPE;
	v->a[63762] = anon_sym_LT_GT;
	v->a[63763] = anon_sym_LT_LT;
	v->a[63764] = anon_sym_LT_LT_DASH;
	v->a[63765] = anon_sym_SEMI;
	v->a[63766] = 3;
	v->a[63767] = actions(3);
	v->a[63768] = 1;
	v->a[63769] = sym_comment;
	v->a[63770] = actions(2287);
	v->a[63771] = 2;
	v->a[63772] = sym_file_descriptor;
	v->a[63773] = aux_sym_heredoc_redirect_token1;
	v->a[63774] = actions(2289);
	v->a[63775] = 15;
	v->a[63776] = anon_sym_esac;
	v->a[63777] = anon_sym_PIPE;
	v->a[63778] = anon_sym_SEMI_SEMI;
	v->a[63779] = anon_sym_AMP_AMP;
	small_parse_table_3189(v);
}

void	small_parse_table_3189(t_small_parse_table_array *v)
{
	v->a[63780] = anon_sym_PIPE_PIPE;
	v->a[63781] = anon_sym_LT;
	v->a[63782] = anon_sym_GT;
	v->a[63783] = anon_sym_GT_GT;
	v->a[63784] = anon_sym_LT_AMP;
	v->a[63785] = anon_sym_GT_AMP;
	v->a[63786] = anon_sym_GT_PIPE;
	v->a[63787] = anon_sym_LT_GT;
	v->a[63788] = anon_sym_LT_LT;
	v->a[63789] = anon_sym_LT_LT_DASH;
	v->a[63790] = anon_sym_SEMI;
	v->a[63791] = 3;
	v->a[63792] = actions(3);
	v->a[63793] = 1;
	v->a[63794] = sym_comment;
	v->a[63795] = actions(2283);
	v->a[63796] = 2;
	v->a[63797] = sym_file_descriptor;
	v->a[63798] = aux_sym_heredoc_redirect_token1;
	v->a[63799] = actions(2285);
	small_parse_table_3190(v);
}

/* EOF small_parse_table_637.c */
