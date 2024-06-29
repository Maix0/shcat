/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_807.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4035(t_small_parse_table_array *v)
{
	v->a[80700] = anon_sym_DOLLAR;
	v->a[80701] = actions(863);
	v->a[80702] = 1;
	v->a[80703] = anon_sym_DQUOTE;
	v->a[80704] = actions(865);
	v->a[80705] = 1;
	v->a[80706] = anon_sym_DOLLAR_LBRACE;
	v->a[80707] = actions(867);
	v->a[80708] = 1;
	v->a[80709] = anon_sym_DOLLAR_LPAREN;
	v->a[80710] = actions(869);
	v->a[80711] = 1;
	v->a[80712] = anon_sym_BQUOTE;
	v->a[80713] = actions(2971);
	v->a[80714] = 1;
	v->a[80715] = sym__bare_dollar;
	v->a[80716] = actions(2967);
	v->a[80717] = 5;
	v->a[80718] = aux_sym_concatenation_token1;
	v->a[80719] = sym_raw_string;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = sym_number;
	v->a[80721] = sym__comment_word;
	v->a[80722] = sym_word;
	v->a[80723] = state(1693);
	v->a[80724] = 5;
	v->a[80725] = sym_arithmetic_expansion;
	v->a[80726] = sym_string;
	v->a[80727] = sym_simple_expansion;
	v->a[80728] = sym_expansion;
	v->a[80729] = sym_command_substitution;
	v->a[80730] = 12;
	v->a[80731] = actions(3);
	v->a[80732] = 1;
	v->a[80733] = sym_comment;
	v->a[80734] = actions(2809);
	v->a[80735] = 1;
	v->a[80736] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80737] = actions(2813);
	v->a[80738] = 1;
	v->a[80739] = anon_sym_DQUOTE;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = actions(2815);
	v->a[80741] = 1;
	v->a[80742] = anon_sym_DOLLAR_LBRACE;
	v->a[80743] = actions(2817);
	v->a[80744] = 1;
	v->a[80745] = anon_sym_DOLLAR_LPAREN;
	v->a[80746] = actions(2819);
	v->a[80747] = 1;
	v->a[80748] = anon_sym_BQUOTE;
	v->a[80749] = actions(2841);
	v->a[80750] = 1;
	v->a[80751] = anon_sym_DOLLAR;
	v->a[80752] = actions(2843);
	v->a[80753] = 1;
	v->a[80754] = sym__comment_word;
	v->a[80755] = actions(2845);
	v->a[80756] = 1;
	v->a[80757] = sym__empty_value;
	v->a[80758] = state(1101);
	v->a[80759] = 1;
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = sym_concatenation;
	v->a[80761] = actions(3015);
	v->a[80762] = 3;
	v->a[80763] = sym_raw_string;
	v->a[80764] = sym_number;
	v->a[80765] = sym_word;
	v->a[80766] = state(1159);
	v->a[80767] = 5;
	v->a[80768] = sym_arithmetic_expansion;
	v->a[80769] = sym_string;
	v->a[80770] = sym_simple_expansion;
	v->a[80771] = sym_expansion;
	v->a[80772] = sym_command_substitution;
	v->a[80773] = 10;
	v->a[80774] = actions(3);
	v->a[80775] = 1;
	v->a[80776] = sym_comment;
	v->a[80777] = actions(59);
	v->a[80778] = 1;
	v->a[80779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = actions(63);
	v->a[80781] = 1;
	v->a[80782] = anon_sym_DQUOTE;
	v->a[80783] = actions(67);
	v->a[80784] = 1;
	v->a[80785] = anon_sym_DOLLAR_LBRACE;
	v->a[80786] = actions(69);
	v->a[80787] = 1;
	v->a[80788] = anon_sym_DOLLAR_LPAREN;
	v->a[80789] = actions(71);
	v->a[80790] = 1;
	v->a[80791] = anon_sym_BQUOTE;
	v->a[80792] = actions(2769);
	v->a[80793] = 1;
	v->a[80794] = sym__bare_dollar;
	v->a[80795] = actions(3017);
	v->a[80796] = 1;
	v->a[80797] = anon_sym_DOLLAR;
	v->a[80798] = actions(2767);
	v->a[80799] = 5;
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
