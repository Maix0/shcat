/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_497.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2485(t_small_parse_table_array *v)
{
	v->a[49700] = state(1394);
	v->a[49701] = 4;
	v->a[49702] = sym_arithmetic_expansion;
	v->a[49703] = sym_simple_expansion;
	v->a[49704] = sym_expansion;
	v->a[49705] = sym_command_substitution;
	v->a[49706] = 10;
	v->a[49707] = actions(3);
	v->a[49708] = 1;
	v->a[49709] = sym_comment;
	v->a[49710] = actions(2293);
	v->a[49711] = 1;
	v->a[49712] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49713] = actions(2299);
	v->a[49714] = 1;
	v->a[49715] = sym_string_content;
	v->a[49716] = actions(2301);
	v->a[49717] = 1;
	v->a[49718] = anon_sym_DOLLAR_LBRACE;
	v->a[49719] = actions(2303);
	small_parse_table_2486(v);
}

void	small_parse_table_2486(t_small_parse_table_array *v)
{
	v->a[49720] = 1;
	v->a[49721] = anon_sym_DOLLAR_LPAREN;
	v->a[49722] = actions(2305);
	v->a[49723] = 1;
	v->a[49724] = anon_sym_BQUOTE;
	v->a[49725] = actions(2420);
	v->a[49726] = 1;
	v->a[49727] = anon_sym_DOLLAR;
	v->a[49728] = actions(2422);
	v->a[49729] = 1;
	v->a[49730] = anon_sym_DQUOTE;
	v->a[49731] = state(1131);
	v->a[49732] = 1;
	v->a[49733] = aux_sym_string_repeat1;
	v->a[49734] = state(1394);
	v->a[49735] = 4;
	v->a[49736] = sym_arithmetic_expansion;
	v->a[49737] = sym_simple_expansion;
	v->a[49738] = sym_expansion;
	v->a[49739] = sym_command_substitution;
	small_parse_table_2487(v);
}

void	small_parse_table_2487(t_small_parse_table_array *v)
{
	v->a[49740] = 5;
	v->a[49741] = actions(3);
	v->a[49742] = 1;
	v->a[49743] = sym_comment;
	v->a[49744] = actions(2065);
	v->a[49745] = 1;
	v->a[49746] = aux_sym_heredoc_redirect_token1;
	v->a[49747] = state(1109);
	v->a[49748] = 2;
	v->a[49749] = sym_file_redirect;
	v->a[49750] = aux_sym_redirected_statement_repeat2;
	v->a[49751] = actions(1924);
	v->a[49752] = 3;
	v->a[49753] = anon_sym_LT;
	v->a[49754] = anon_sym_GT;
	v->a[49755] = anon_sym_GT_GT;
	v->a[49756] = actions(2063);
	v->a[49757] = 6;
	v->a[49758] = anon_sym_PIPE;
	v->a[49759] = anon_sym_SEMI_SEMI;
	small_parse_table_2488(v);
}

void	small_parse_table_2488(t_small_parse_table_array *v)
{
	v->a[49760] = anon_sym_AMP_AMP;
	v->a[49761] = anon_sym_PIPE_PIPE;
	v->a[49762] = anon_sym_LT_LT;
	v->a[49763] = anon_sym_SEMI;
	v->a[49764] = 8;
	v->a[49765] = actions(3);
	v->a[49766] = 1;
	v->a[49767] = sym_comment;
	v->a[49768] = actions(2277);
	v->a[49769] = 1;
	v->a[49770] = anon_sym_POUND;
	v->a[49771] = actions(2279);
	v->a[49772] = 1;
	v->a[49773] = aux_sym__simple_variable_name_token1;
	v->a[49774] = actions(2281);
	v->a[49775] = 1;
	v->a[49776] = anon_sym_0;
	v->a[49777] = actions(2283);
	v->a[49778] = 1;
	v->a[49779] = sym_variable_name;
	small_parse_table_2489(v);
}

void	small_parse_table_2489(t_small_parse_table_array *v)
{
	v->a[49780] = actions(2424);
	v->a[49781] = 1;
	v->a[49782] = anon_sym_RBRACE;
	v->a[49783] = state(1600);
	v->a[49784] = 1;
	v->a[49785] = sym__expansion_body;
	v->a[49786] = actions(2275);
	v->a[49787] = 6;
	v->a[49788] = anon_sym_BANG;
	v->a[49789] = anon_sym_DASH;
	v->a[49790] = anon_sym_STAR;
	v->a[49791] = anon_sym_QMARK;
	v->a[49792] = anon_sym_DOLLAR;
	v->a[49793] = anon_sym_AT;
	v->a[49794] = 4;
	v->a[49795] = actions(3);
	v->a[49796] = 1;
	v->a[49797] = sym_comment;
	v->a[49798] = actions(2428);
	v->a[49799] = 1;
	small_parse_table_2490(v);
}

/* EOF small_parse_table_497.c */
