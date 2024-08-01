/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_178.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_890(t_small_parse_table_array *v)
{
	v->a[17800] = 1;
	v->a[17801] = anon_sym_DQUOTE;
	v->a[17802] = actions(61);
	v->a[17803] = 1;
	v->a[17804] = anon_sym_DOLLAR_LBRACE;
	v->a[17805] = actions(63);
	v->a[17806] = 1;
	v->a[17807] = anon_sym_DOLLAR_LPAREN;
	v->a[17808] = actions(65);
	v->a[17809] = 1;
	v->a[17810] = anon_sym_BQUOTE;
	v->a[17811] = actions(419);
	v->a[17812] = 1;
	v->a[17813] = sym__bare_dollar;
	v->a[17814] = state(189);
	v->a[17815] = 1;
	v->a[17816] = aux_sym_command_repeat2;
	v->a[17817] = state(570);
	v->a[17818] = 1;
	v->a[17819] = sym_concatenation;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = actions(602);
	v->a[17821] = 3;
	v->a[17822] = sym_raw_string;
	v->a[17823] = sym_number;
	v->a[17824] = sym_word;
	v->a[17825] = state(431);
	v->a[17826] = 5;
	v->a[17827] = sym_arithmetic_expansion;
	v->a[17828] = sym_string;
	v->a[17829] = sym_simple_expansion;
	v->a[17830] = sym_expansion;
	v->a[17831] = sym_command_substitution;
	v->a[17832] = actions(403);
	v->a[17833] = 10;
	v->a[17834] = anon_sym_PIPE;
	v->a[17835] = anon_sym_SEMI_SEMI;
	v->a[17836] = anon_sym_AMP_AMP;
	v->a[17837] = anon_sym_PIPE_PIPE;
	v->a[17838] = anon_sym_LT;
	v->a[17839] = anon_sym_GT;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = anon_sym_GT_GT;
	v->a[17841] = anon_sym_LT_LT;
	v->a[17842] = aux_sym_heredoc_redirect_token1;
	v->a[17843] = anon_sym_SEMI;
	v->a[17844] = 13;
	v->a[17845] = actions(3);
	v->a[17846] = 1;
	v->a[17847] = sym_comment;
	v->a[17848] = actions(457);
	v->a[17849] = 1;
	v->a[17850] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17851] = actions(460);
	v->a[17852] = 1;
	v->a[17853] = anon_sym_DOLLAR;
	v->a[17854] = actions(463);
	v->a[17855] = 1;
	v->a[17856] = anon_sym_DQUOTE;
	v->a[17857] = actions(466);
	v->a[17858] = 1;
	v->a[17859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = actions(469);
	v->a[17861] = 1;
	v->a[17862] = anon_sym_DOLLAR_LPAREN;
	v->a[17863] = actions(472);
	v->a[17864] = 1;
	v->a[17865] = anon_sym_BQUOTE;
	v->a[17866] = actions(475);
	v->a[17867] = 1;
	v->a[17868] = sym__bare_dollar;
	v->a[17869] = state(189);
	v->a[17870] = 1;
	v->a[17871] = aux_sym_command_repeat2;
	v->a[17872] = state(570);
	v->a[17873] = 1;
	v->a[17874] = sym_concatenation;
	v->a[17875] = actions(688);
	v->a[17876] = 3;
	v->a[17877] = sym_raw_string;
	v->a[17878] = sym_number;
	v->a[17879] = sym_word;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = state(431);
	v->a[17881] = 5;
	v->a[17882] = sym_arithmetic_expansion;
	v->a[17883] = sym_string;
	v->a[17884] = sym_simple_expansion;
	v->a[17885] = sym_expansion;
	v->a[17886] = sym_command_substitution;
	v->a[17887] = actions(455);
	v->a[17888] = 10;
	v->a[17889] = anon_sym_PIPE;
	v->a[17890] = anon_sym_SEMI_SEMI;
	v->a[17891] = anon_sym_AMP_AMP;
	v->a[17892] = anon_sym_PIPE_PIPE;
	v->a[17893] = anon_sym_LT;
	v->a[17894] = anon_sym_GT;
	v->a[17895] = anon_sym_GT_GT;
	v->a[17896] = anon_sym_LT_LT;
	v->a[17897] = aux_sym_heredoc_redirect_token1;
	v->a[17898] = anon_sym_SEMI;
	v->a[17899] = 5;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
