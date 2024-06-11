/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_955.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4775(t_small_parse_table_array *v)
{
	v->a[95500] = 1;
	v->a[95501] = aux_sym_string_repeat1;
	v->a[95502] = state(2107);
	v->a[95503] = 4;
	v->a[95504] = sym_arithmetic_expansion;
	v->a[95505] = sym_simple_expansion;
	v->a[95506] = sym_expansion;
	v->a[95507] = sym_command_substitution;
	v->a[95508] = 4;
	v->a[95509] = actions(3);
	v->a[95510] = 1;
	v->a[95511] = sym_comment;
	v->a[95512] = actions(4010);
	v->a[95513] = 1;
	v->a[95514] = anon_sym_esac;
	v->a[95515] = actions(4012);
	v->a[95516] = 1;
	v->a[95517] = sym_extglob_pattern;
	v->a[95518] = actions(4008);
	v->a[95519] = 10;
	small_parse_table_4776(v);
}

void	small_parse_table_4776(t_small_parse_table_array *v)
{
	v->a[95520] = anon_sym_LPAREN;
	v->a[95521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95522] = anon_sym_DOLLAR;
	v->a[95523] = anon_sym_DQUOTE;
	v->a[95524] = sym_raw_string;
	v->a[95525] = sym_number;
	v->a[95526] = anon_sym_DOLLAR_LBRACE;
	v->a[95527] = anon_sym_DOLLAR_LPAREN;
	v->a[95528] = anon_sym_BQUOTE;
	v->a[95529] = sym_word;
	v->a[95530] = 4;
	v->a[95531] = actions(3);
	v->a[95532] = 1;
	v->a[95533] = sym_comment;
	v->a[95534] = actions(4016);
	v->a[95535] = 1;
	v->a[95536] = anon_sym_esac;
	v->a[95537] = actions(4018);
	v->a[95538] = 1;
	v->a[95539] = sym_extglob_pattern;
	small_parse_table_4777(v);
}

void	small_parse_table_4777(t_small_parse_table_array *v)
{
	v->a[95540] = actions(4014);
	v->a[95541] = 10;
	v->a[95542] = anon_sym_LPAREN;
	v->a[95543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95544] = anon_sym_DOLLAR;
	v->a[95545] = anon_sym_DQUOTE;
	v->a[95546] = sym_raw_string;
	v->a[95547] = sym_number;
	v->a[95548] = anon_sym_DOLLAR_LBRACE;
	v->a[95549] = anon_sym_DOLLAR_LPAREN;
	v->a[95550] = anon_sym_BQUOTE;
	v->a[95551] = sym_word;
	v->a[95552] = 10;
	v->a[95553] = actions(3);
	v->a[95554] = 1;
	v->a[95555] = sym_comment;
	v->a[95556] = actions(3856);
	v->a[95557] = 1;
	v->a[95558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95559] = actions(3862);
	small_parse_table_4778(v);
}

void	small_parse_table_4778(t_small_parse_table_array *v)
{
	v->a[95560] = 1;
	v->a[95561] = sym_string_content;
	v->a[95562] = actions(3864);
	v->a[95563] = 1;
	v->a[95564] = anon_sym_DOLLAR_LBRACE;
	v->a[95565] = actions(3866);
	v->a[95566] = 1;
	v->a[95567] = anon_sym_DOLLAR_LPAREN;
	v->a[95568] = actions(3868);
	v->a[95569] = 1;
	v->a[95570] = anon_sym_BQUOTE;
	v->a[95571] = actions(4020);
	v->a[95572] = 1;
	v->a[95573] = anon_sym_DOLLAR;
	v->a[95574] = actions(4022);
	v->a[95575] = 1;
	v->a[95576] = anon_sym_DQUOTE;
	v->a[95577] = state(1987);
	v->a[95578] = 1;
	v->a[95579] = aux_sym_string_repeat1;
	small_parse_table_4779(v);
}

void	small_parse_table_4779(t_small_parse_table_array *v)
{
	v->a[95580] = state(2107);
	v->a[95581] = 4;
	v->a[95582] = sym_arithmetic_expansion;
	v->a[95583] = sym_simple_expansion;
	v->a[95584] = sym_expansion;
	v->a[95585] = sym_command_substitution;
	v->a[95586] = 10;
	v->a[95587] = actions(3);
	v->a[95588] = 1;
	v->a[95589] = sym_comment;
	v->a[95590] = actions(3856);
	v->a[95591] = 1;
	v->a[95592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95593] = actions(3862);
	v->a[95594] = 1;
	v->a[95595] = sym_string_content;
	v->a[95596] = actions(3864);
	v->a[95597] = 1;
	v->a[95598] = anon_sym_DOLLAR_LBRACE;
	v->a[95599] = actions(3866);
	small_parse_table_4780(v);
}

/* EOF small_parse_table_955.c */
