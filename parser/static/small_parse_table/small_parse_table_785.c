/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_785.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3925(t_small_parse_table_array *v)
{
	v->a[78500] = sym_command_substitution;
	v->a[78501] = 10;
	v->a[78502] = actions(3);
	v->a[78503] = 1;
	v->a[78504] = sym_comment;
	v->a[78505] = actions(3071);
	v->a[78506] = 1;
	v->a[78507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78508] = actions(3077);
	v->a[78509] = 1;
	v->a[78510] = sym_string_content;
	v->a[78511] = actions(3079);
	v->a[78512] = 1;
	v->a[78513] = anon_sym_DOLLAR_LBRACE;
	v->a[78514] = actions(3081);
	v->a[78515] = 1;
	v->a[78516] = anon_sym_DOLLAR_LPAREN;
	v->a[78517] = actions(3083);
	v->a[78518] = 1;
	v->a[78519] = anon_sym_BQUOTE;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = actions(3355);
	v->a[78521] = 1;
	v->a[78522] = anon_sym_DOLLAR;
	v->a[78523] = actions(3357);
	v->a[78524] = 1;
	v->a[78525] = anon_sym_DQUOTE;
	v->a[78526] = state(1681);
	v->a[78527] = 1;
	v->a[78528] = aux_sym_string_repeat1;
	v->a[78529] = state(1739);
	v->a[78530] = 4;
	v->a[78531] = sym_arithmetic_expansion;
	v->a[78532] = sym_simple_expansion;
	v->a[78533] = sym_expansion;
	v->a[78534] = sym_command_substitution;
	v->a[78535] = 4;
	v->a[78536] = actions(3);
	v->a[78537] = 1;
	v->a[78538] = sym_comment;
	v->a[78539] = actions(3347);
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = 1;
	v->a[78541] = anon_sym_esac;
	v->a[78542] = actions(3349);
	v->a[78543] = 1;
	v->a[78544] = sym_extglob_pattern;
	v->a[78545] = actions(3345);
	v->a[78546] = 10;
	v->a[78547] = anon_sym_LPAREN;
	v->a[78548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78549] = anon_sym_DOLLAR;
	v->a[78550] = anon_sym_DQUOTE;
	v->a[78551] = sym_raw_string;
	v->a[78552] = sym_number;
	v->a[78553] = anon_sym_DOLLAR_LBRACE;
	v->a[78554] = anon_sym_DOLLAR_LPAREN;
	v->a[78555] = anon_sym_BQUOTE;
	v->a[78556] = sym_word;
	v->a[78557] = 4;
	v->a[78558] = actions(3);
	v->a[78559] = 1;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = sym_comment;
	v->a[78561] = actions(3341);
	v->a[78562] = 1;
	v->a[78563] = anon_sym_esac;
	v->a[78564] = actions(3343);
	v->a[78565] = 1;
	v->a[78566] = sym_extglob_pattern;
	v->a[78567] = actions(3339);
	v->a[78568] = 10;
	v->a[78569] = anon_sym_LPAREN;
	v->a[78570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78571] = anon_sym_DOLLAR;
	v->a[78572] = anon_sym_DQUOTE;
	v->a[78573] = sym_raw_string;
	v->a[78574] = sym_number;
	v->a[78575] = anon_sym_DOLLAR_LBRACE;
	v->a[78576] = anon_sym_DOLLAR_LPAREN;
	v->a[78577] = anon_sym_BQUOTE;
	v->a[78578] = sym_word;
	v->a[78579] = 10;
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = actions(3);
	v->a[78581] = 1;
	v->a[78582] = sym_comment;
	v->a[78583] = actions(3071);
	v->a[78584] = 1;
	v->a[78585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78586] = actions(3077);
	v->a[78587] = 1;
	v->a[78588] = sym_string_content;
	v->a[78589] = actions(3079);
	v->a[78590] = 1;
	v->a[78591] = anon_sym_DOLLAR_LBRACE;
	v->a[78592] = actions(3081);
	v->a[78593] = 1;
	v->a[78594] = anon_sym_DOLLAR_LPAREN;
	v->a[78595] = actions(3083);
	v->a[78596] = 1;
	v->a[78597] = anon_sym_BQUOTE;
	v->a[78598] = actions(3359);
	v->a[78599] = 1;
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
